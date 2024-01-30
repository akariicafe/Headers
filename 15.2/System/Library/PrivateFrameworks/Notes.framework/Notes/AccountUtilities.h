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

- (id)freshContext;
- (void)_accountStoreDidChange:(id)a0;
- (void)startKeepingAccountInfosUpToDate;
- (id)accountsEnabledForNotes;
- (BOOL)localNotesExist;
- (void).cxx_destruct;
- (id)init;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)a0;
- (void)dealloc;
- (id)localAccountDisplayName;
- (void)updateAccountInfos;
- (id)accountIDsEnabledForNotes;

@end
