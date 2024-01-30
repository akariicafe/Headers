@class UIColor, NSString, TKAdaptiveImage_Trait, NSURL, UIImage;
@protocol TKNetworkTask;

@interface TKAdaptiveImage : TKAdaptiveResourceObject {
    BOOL _supportsTraits;
    TKAdaptiveImage_Trait *_currentTrait;
    id<TKNetworkTask> _task;
}

@property (retain, nonatomic) NSURL *currentURL;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double quality;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL loading;

+ (id)zeroTrait;

- (id)traits;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)adaptiveMetricsDidChange;
- (void)didLoadImage:(id)a0 state:(unsigned long long)a1;
- (id)imageTraitForMetrics;
- (void)loadWithTrait:(id)a0;
- (void)tmlDispose;
- (void)tmlObjectCompleted;
- (id)url:(id)a0 withTrait:(id)a1;

@end
