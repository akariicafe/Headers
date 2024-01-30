@interface _LSDModifyService : _LSDService

+ (id)XPCInterface;
+ (BOOL)isEnabled;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)dispatchQueue;

@end
