@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (void)wait;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)signal;
- (id)description;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;

@end
