@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedUnarchiver;
+ (Class)classForKeyedArchiver;

- (unsigned long long)_cfTypeID;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (BOOL)allowsWeakReference;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)retainWeakReference;

@end
