@class EMBlockedSenderManager, NSString, MFMailboxProvider, NSObject;
@protocol OS_os_log, EMUserProfileProvider;

@interface MFMessageTransformer : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFMailboxProvider *mailboxProvider;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)transformLegacyMailMessage:(id)a0 mailboxScope:(id)a1 loaderBlock:(id /* block */)a2;
- (id)initWithMailboxProvider:(id)a0 userProfileProvider:(id)a1 blockedSenderManager:(id)a2;
- (id)transformLegacyMailMessages:(id)a0 mailboxScope:(id)a1;
- (id)_transformLegacyMailMessage:(id)a0 mailboxScope:(id)a1 duplicateInfo:(id)a2 loaderBlock:(id /* block */)a3;

@end
