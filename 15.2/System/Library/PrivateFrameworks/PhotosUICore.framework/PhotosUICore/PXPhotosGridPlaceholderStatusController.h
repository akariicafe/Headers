@class NSString, PXStatusView, PXCPLUIStatusProvider, PXCPLStatusController;

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    BOOL _presentCPLStatus;
    NSString *_fallbackTitle;
    NSString *_fallbackMessage;
    PXStatusView *_statusView;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCPLStatusController *_statusController;
}

@property (readonly, nonatomic) PXStatusView *statusView;

- (void)setCplUIStatusProvider:(id)a0;
- (void)_systemPhotoLibraryDidChange;
- (void)_refreshCPLUIStatusProvider;
- (void).cxx_destruct;
- (id)init;
- (id)_createCPLUIStatusProvider;
- (id)initForPresentingCPLStatus:(BOOL)a0 fallbackTitle:(id)a1 fallbackMessage:(id)a2;

@end
