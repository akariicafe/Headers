@class NSError, NSDictionary, MFConditionLock;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {
    MFConditionLock *_conditionLock;
    NSDictionary *_resolvedRecipientsByEmailAddress;
    NSError *_error;
}

@property (readonly) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (void)resolvedRecipientsByEmailAddress:(id)a0;
- (id)waitForResolvedRecipients;

@end
