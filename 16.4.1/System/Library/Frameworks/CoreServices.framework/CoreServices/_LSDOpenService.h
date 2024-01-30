@interface _LSDOpenService : _LSDService

+ (unsigned short)connectionType;
+ (id)dispatchQueue;
+ (id)XPCInterface;
+ (Class)clientClass;

- (id)initWithXPCListener:(id)a0;

@end
