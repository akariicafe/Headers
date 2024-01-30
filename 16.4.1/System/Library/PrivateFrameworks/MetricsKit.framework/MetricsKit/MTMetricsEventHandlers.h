@class MTAccountEventHandler, MTExitEventHandler, MTDialogEventHandler, MTMediaEventHandler, MTFlexibleEventHandler, MTSearchEventHandler, MTPageEventHandler, MTClickEventHandler, MTEnterEventHandler, MTImpressionsEventHandler;

@interface MTMetricsEventHandlers : MTEventHandlers

@property (readonly, nonatomic) MTClickEventHandler *click;
@property (readonly, nonatomic) MTEnterEventHandler *enter;
@property (readonly, nonatomic) MTExitEventHandler *exit;
@property (readonly, nonatomic) MTFlexibleEventHandler *flexible;
@property (readonly, nonatomic) MTImpressionsEventHandler *impressions;
@property (readonly, nonatomic) MTPageEventHandler *page;
@property (readonly, nonatomic) MTSearchEventHandler *search;
@property (readonly, nonatomic) MTAccountEventHandler *account;
@property (readonly, nonatomic) MTDialogEventHandler *dialog;
@property (readonly, nonatomic) MTMediaEventHandler *media;

- (void).cxx_destruct;
- (Class)baseDataProviderClass;
- (void)registerDefaultEventHandlers;

@end
