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
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)adaptiveMetricsDidChange;
- (id)imageTraitForMetrics;
- (void)tmlDispose;
- (void)didLoadImage:(id)a0 state:(unsigned long long)a1;
- (void)loadWithTrait:(id)a0;
- (id)url:(id)a0 withTrait:(id)a1;
- (void)tmlObjectCompleted;

@end
