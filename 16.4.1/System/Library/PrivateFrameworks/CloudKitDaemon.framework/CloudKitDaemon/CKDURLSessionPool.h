@interface CKDURLSessionPool : NSObject {
    int _backgroundSessionConnectionPoolLimit;
}

@property (readonly, nonatomic) int backgroundSessionConnectionPoolLimit;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (void)_updateBackgroundSessionConnectionPoolLimit;
- (id)init;

@end
