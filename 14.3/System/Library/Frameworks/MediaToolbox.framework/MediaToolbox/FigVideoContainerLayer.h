@class CALayer, NSString;

@interface FigVideoContainerLayer : FigBaseCALayer {
    CALayer *_videoLayer;
    CALayer *_STSLayer;
}

@property (retain, nonatomic) CALayer *videoLayer;
@property (nonatomic) BOOL shouldResizeVideoLayer;
@property (retain, nonatomic) NSString *STSLabel;
@property (nonatomic, getter=isForScrubbingOnly) BOOL forScrubbingOnly;

+ (id)defaultActionForKey:(id)a0;

- (void)layoutSublayers;
- (id)init;
- (void)dealloc;
- (id)actionForKey:(id)a0;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;

@end
