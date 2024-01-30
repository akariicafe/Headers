@class NSURL, TPSWidgetController, TPSTip;

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation

@property (retain, nonatomic) NSURL *lightAssetURL;
@property (retain, nonatomic) NSURL *darkAssetURL;
@property (readonly, weak, nonatomic) TPSWidgetController *widgetController;
@property (readonly, nonatomic) TPSTip *widgetTip;

- (void).cxx_destruct;
- (void)main;
- (id)initWithTip:(id)a0 widgetController:(id)a1;

@end
