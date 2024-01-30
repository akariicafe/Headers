@class NSString, PHFetchResult, PXGadgetDataSourceManager;
@protocol PXContentUnavailablePlaceholderManagerDelegate;

@interface PXContentUnavailablePlaceholderManager : NSObject <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver> {
    struct { BOOL didChange; } _delegateRespondsTo;
}

@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *customMessage;
@property (retain, nonatomic) PXGadgetDataSourceManager *gadgetDataSourceManager;
@property (retain, nonatomic) PHFetchResult *singleAssetFetchResult;
@property (nonatomic, getter=isDataSourceEmpty) BOOL dataSourceEmpty;
@property (nonatomic, getter=isLibraryEmpty) BOOL libraryEmpty;
@property (weak, nonatomic) id<PXContentUnavailablePlaceholderManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsPlaceholder;
@property (readonly, nonatomic) NSString *placeholderTitle;
@property (readonly, nonatomic) NSString *placeholderMessage;
@property (readonly, nonatomic) NSString *placeholderButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)performPlaceholderButtonAction;
- (void)_gadgetDataSourceDidChange;
- (id)initWithGadgetDataSourceManager:(id)a0 customTitle:(id)a1 customMessage:(id)a2;
- (void)_invalidate;

@end
