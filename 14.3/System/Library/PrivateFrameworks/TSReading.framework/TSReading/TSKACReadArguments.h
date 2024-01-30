@interface TSKACReadArguments : NSObject

@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) void *argument;
@property (readonly, nonatomic) id argument2;

- (void)dealloc;
- (id)initWithSelector:(SEL)a0 target:(id)a1 argument:(void *)a2;
- (id)initWithSelector:(SEL)a0 target:(id)a1 argument:(void *)a2 argument2:(id)a3;

@end
