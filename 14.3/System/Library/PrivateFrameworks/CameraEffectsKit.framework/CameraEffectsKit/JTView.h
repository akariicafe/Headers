@interface JTView : UIView

@property BOOL debuggingUIEnabled;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)enableDebugMode:(id)a0;

@end
