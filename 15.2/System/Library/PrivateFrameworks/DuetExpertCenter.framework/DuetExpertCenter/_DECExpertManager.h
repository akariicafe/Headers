@class NSArray;

@interface _DECExpertManager : NSObject {
    NSArray *_experts;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_createExperts;

@end
