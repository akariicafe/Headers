@class NoteContext, NSArray, ACAccountStore, NSLock, NSObject;
@protocol OS_dispatch_group;

@interface AccountUtilities : NSObject {
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup;
@property (retain) NSLock *updateAccountInfosLock;

+ (id)sharedAccountUtilities;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateAccountInfos;
- (void)dealloc;
- (id)accountIDsEnabledForNotes;
- (BOOL)localNotesExist;
- (id)freshContext;
- (id)accountsEnabledForNotes;
- (void)startKeepingAccountInfosUpToDate;
- (id)localAccountDisplayName;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)a0;

@end
