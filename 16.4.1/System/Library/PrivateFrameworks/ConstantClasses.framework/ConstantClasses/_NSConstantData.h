@interface _NSConstantData : NSData

+ (id)alloc;

- (id)retain;
- (const void *)bytes;
- (oneway void)release;
- (unsigned long long)length;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
