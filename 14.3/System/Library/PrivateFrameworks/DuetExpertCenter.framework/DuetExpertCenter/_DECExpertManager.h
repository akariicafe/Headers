@class NSArray;

@interface _DECExpertManager : NSObject {
    NSArray *_experts;
}

+ (id)sharedInstance;

- (id)_createExperts;
- (id)init;
- (void).cxx_destruct;

@end
