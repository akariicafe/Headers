@interface _NSConstantData : NSData

+ (id)alloc;

- (const void *)bytes;
- (unsigned long long)length;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;

@end
