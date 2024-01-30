@interface ODIPyramid : NSObject

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;
+ (unsigned long long)nodeCountWithState:(id)a0;
+ (BOOL)verticalFlipWithState:(id)a0;
+ (void)mapWithState:(id)a0 apexUp:(BOOL)a1;
+ (void)addTrapezoidForNode:(id)a0 top:(float)a1 height:(float)a2 topBase:(float)a3 bottomBase:(float)a4 state:(id)a5;

@end
