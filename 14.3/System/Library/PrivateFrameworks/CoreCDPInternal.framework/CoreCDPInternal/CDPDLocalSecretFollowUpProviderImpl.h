@class NSString;

@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteLocalSecretChangeFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
