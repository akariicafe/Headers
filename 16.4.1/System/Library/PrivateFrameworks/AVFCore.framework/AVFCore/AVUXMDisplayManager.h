@class AVDisplayCriteria;

@interface AVUXMDisplayManager : NSObject {
    AVDisplayCriteria *_preferredDisplayCriteria;
}

@property (class, readonly, nonatomic) AVUXMDisplayManager *sharedAVKitUXMDisplayManager;

@property (copy, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;

- (id)initInternal;
- (void)dealloc;
- (id)init;
- (void)_updateUXMWithDisplayCriteria:(id)a0;
- (void)_updateUXMWithDisplayCriteriaWithLock:(id)a0;
- (id)currentUXMDisplayCriteria;

@end
