@class NSError, NSDictionary, MFConditionLock;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {
    MFConditionLock *_conditionLock;
    NSDictionary *_resolvedRecipientsByEmailAddress;
    NSError *_error;
}

@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)init;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (id)waitForResolvedRecipients;
- (void)resolvedRecipientsByEmailAddress:(id)a0;

@end
