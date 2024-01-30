@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)signal;
- (void)unlock;
- (BOOL)waitUntilDate:(id)a0;
- (void)lock;
- (id)description;
- (void)broadcast;
- (id)init;
- (void)dealloc;
- (void)wait;

@end
