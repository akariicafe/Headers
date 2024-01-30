@class NSSet;

@interface BGSystemTaskStatus : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSSet *blockingReasons;

- (void).cxx_destruct;

@end
