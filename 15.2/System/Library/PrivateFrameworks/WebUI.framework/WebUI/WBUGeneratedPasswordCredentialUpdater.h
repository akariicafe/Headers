@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WBUGeneratedPasswordCredentialUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_urlsScheduledForUpdating;
    NSMutableDictionary *_urlsToUpdateRequests;
}

+ (id)sharedUpdater;

- (void).cxx_destruct;
- (id)init;
- (void)_performRequest:(id)a0;
- (void)updateCredentialWithNewUsername:(id)a0 newGeneratedPassword:(id)a1 lastGeneratedPassword:(id)a2 credentialURL:(id)a3 protectionSpace:(id)a4 shouldSaveNewCredential:(BOOL)a5;

@end
