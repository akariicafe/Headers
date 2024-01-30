@class NSString;
@protocol SXQuickLookInteractor, SXQuickLookEventHandlerDelegate, SXQuickLookRouter;

@interface SXQuickLookEventHandler : NSObject <SXQuickLookInteractorDelegate, SXQuickLookEventHandler>

@property (readonly, nonatomic) id<SXQuickLookInteractor> interactor;
@property (readonly, nonatomic) id<SXQuickLookRouter> router;
@property (weak, nonatomic) id<SXQuickLookEventHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didLoadThumbnail:(id)a0;
- (void)didTapThumbnailView:(id)a0;
- (void)failedToLoadThumbnail;
- (id)initWithInteractor:(id)a0 router:(id)a1;
- (void)requestThumbnailWithSize:(struct CGSize { double x0; double x1; })a0;

@end
