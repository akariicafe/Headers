@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (id)iconStateDisplayIdentifiers;
- (id)initWithIconModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_visibleIdentifiersChanged:(id)a0;

@end
