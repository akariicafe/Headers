@class PHPhotoLibrary, PHPickerFilter, NSArray;

@interface PHPickerConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers;
@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection;
@property (nonatomic, setter=_setUsesEmbeddedMessagesLayout:) BOOL _usesEmbeddedMessagesLayout;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic) long long selection;
@property (nonatomic) long long selectionLimit;
@property (copy, nonatomic) PHPickerFilter *filter;
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (unsigned long long)hash;
- (id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)a0;
- (void)_setOverlayFlag:(BOOL)a0;

@end
