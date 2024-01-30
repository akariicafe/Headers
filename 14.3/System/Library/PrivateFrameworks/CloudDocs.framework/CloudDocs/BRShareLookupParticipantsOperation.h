@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation {
    NSArray *_userIdentities;
}

@property (copy) id /* block */ lookupParticipantsCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithUserIdentities:(id)a0;

@end
