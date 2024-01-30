@interface _LSDReadService : _LSDService

+ (unsigned short)connectionType;
+ (BOOL)isEnabled;
+ (id)dispatchQueue;
+ (id)XPCInterface;
+ (Class)clientClass;

@end
