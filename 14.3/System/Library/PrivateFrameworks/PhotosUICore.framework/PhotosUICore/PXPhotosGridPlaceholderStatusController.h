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

- (void)_systemPhotoLibraryDidChange;
- (void)setCplUIStatusProvider:(id)a0;
- (id)_createCPLUIStatusProvider;
- (id)init;
- (void).cxx_destruct;
- (void)_refreshCPLUIStatusProvider;
- (id)initForPresentingCPLStatus:(BOOL)a0 fallbackTitle:(id)a1 fallbackMessage:(id)a2;

@end
