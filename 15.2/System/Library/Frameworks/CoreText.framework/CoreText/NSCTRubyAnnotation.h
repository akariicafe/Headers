@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
