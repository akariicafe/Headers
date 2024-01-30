@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithIconModel:(id)a0;
- (void)dealloc;
- (void)_visibleIdentifiersChanged:(id)a0;
- (id)iconStateDisplayIdentifiers;

@end
