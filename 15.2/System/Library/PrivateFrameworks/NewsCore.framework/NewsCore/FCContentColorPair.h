@class FCColor;

@interface FCContentColorPair : NSObject

@property (readonly, copy, nonatomic) FCColor *lightColor;
@property (readonly, copy, nonatomic) FCColor *darkColor;

- (id)initWithLightColor:(id)a0 darkColor:(id)a1;
- (void).cxx_destruct;

@end
