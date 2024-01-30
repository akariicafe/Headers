@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (id)initWithIconModel:(id)a0;
- (void)dealloc;
- (id)iconStateDisplayIdentifiers;
- (void)_visibleIdentifiersChanged:(id)a0;
- (void).cxx_destruct;

@end
