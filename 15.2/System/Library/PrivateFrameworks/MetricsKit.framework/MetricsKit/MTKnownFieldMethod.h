@interface MTKnownFieldMethod : NSObject

@property (nonatomic) void /* function */ *imp;
@property (nonatomic) SEL accessor;

- (id)initWithIMP:(void /* function */ *)a0 accessor:(SEL)a1;

@end
