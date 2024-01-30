@interface RWIProtocolDOMRGBAColor : RWIProtocolJSONObject

@property (nonatomic) int r;
@property (nonatomic) int g;
@property (nonatomic) int b;
@property (nonatomic) double a;

- (id)initWithR:(int)a0 g:(int)a1 b:(int)a2;

@end
