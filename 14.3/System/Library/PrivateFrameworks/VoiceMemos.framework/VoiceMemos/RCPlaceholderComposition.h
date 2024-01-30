@class RCComposition;

@interface RCPlaceholderComposition : RCComposition

@property (readonly, nonatomic) RCComposition *underlyingComposition;

- (void).cxx_destruct;
- (id)initWithUnderlyingComposition:(id)a0;

@end
