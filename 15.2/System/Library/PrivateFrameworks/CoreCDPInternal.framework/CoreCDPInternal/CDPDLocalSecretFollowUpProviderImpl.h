@class NSString;

@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteConfirmExistingSecretFollowUp;
- (void)deleteLocalSecretChangeFollowUp;
- (void)postConfirmExistingSecretFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
