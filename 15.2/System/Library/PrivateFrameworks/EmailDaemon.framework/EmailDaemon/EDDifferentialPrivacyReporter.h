@class NSString, _MSTTLReference, EDMailDynamicDataAsset, NSObject;
@protocol OS_dispatch_queue, EMUserProfileProvider;

@interface EDDifferentialPrivacyReporter : NSObject <EDMessageChangeHookResponder>

@property (copy, nonatomic) id /* block */ recordingHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue;
@property (retain, nonatomic) NSString *_recordingKey;
@property (weak, nonatomic) id<EMUserProfileProvider> _profileProvider;
@property (retain, nonatomic) _MSTTLReference *_userDomains;
@property (retain, nonatomic) EDMailDynamicDataAsset *_mailDynamicData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportSenderDomainForMessages:(id)a0;
- (BOOL)_shouldRecordMailbox:(id)a0;
- (id)_localeIdentifier;
- (id)initWithUserProfileProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isUserAccountDomain:(id)a0;
- (void)_recordSenders:(id)a0;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;

@end
