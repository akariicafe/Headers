@interface SXIAdDebugView : UILabel

@property (readonly, nonatomic) unsigned long long adType;

- (id)initWithType:(unsigned long long)a0;
- (void)setState:(int)a0 description:(id)a1;

@end
