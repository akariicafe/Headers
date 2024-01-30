@interface _NSConstantData : NSData

+ (id)alloc;

- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)retain;
- (const void *)bytes;
- (void)dealloc;
- (oneway void)release;

@end
