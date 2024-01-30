@class EKObject;

@interface EKObjectValidationContext : NSObject

@property (readonly, nonatomic) EKObject *rootObject;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) BOOL reachedMaxDepth;

- (id)initWithRootObject:(id)a0;
- (void)faultIfNeededForObject:(id)a0;
- (void).cxx_destruct;

@end
