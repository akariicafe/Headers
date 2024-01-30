@interface RUIScriptingStaticFunction : NSObject

@property (nonatomic) const char *identifier;
@property (nonatomic) void /* function */ *function;
@property (nonatomic) int JSPropertyAttributes;

- (id)description;

@end
