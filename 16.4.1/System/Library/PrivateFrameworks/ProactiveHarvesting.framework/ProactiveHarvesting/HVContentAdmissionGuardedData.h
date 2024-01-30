@class NSSet, _PASAsset2, NSHashTable;

@interface HVContentAdmissionGuardedData : NSObject {
    NSSet *_learnFromThisAppBundleIdentifierDenylist;
    NSSet *_configurableBundleIdentifierDenyList;
    NSHashTable *_observers;
    _PASAsset2 *_configurableBundleIdentifierDenyListAsset;
    BOOL _suggestionsShouldShowPastEvents;
}

- (void).cxx_destruct;

@end
