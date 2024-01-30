@interface CKDURLSessionPool : NSObject {
    int _backgroundSessionConnectionPoolLimit;
}

@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;

+ (id)sharedURLSessionPool;
+ (id)backgroundSessionConnectionPoolName;

- (void)_updateBackgroundSessionConnectionPoolLimit;
- (id)init;

@end
