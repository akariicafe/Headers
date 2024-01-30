@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}

+ (void)initialize;

- (void)coordinatorWillRemoveStore:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
