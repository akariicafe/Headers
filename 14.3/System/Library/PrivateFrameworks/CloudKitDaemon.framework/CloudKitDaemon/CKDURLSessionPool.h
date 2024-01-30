@interface CKDURLSessionPool : NSObject {
    int _backgroundSessionConnectionPoolLimit;
}

@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;

+ (id)sharedURLSessionPool;
+ (id)backgroundSessionConnectionPoolName;

- (id)init;
- (void)_updateBackgroundSessionConnectionPoolLimit;

@end
