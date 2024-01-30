@class NSArray;

@interface BRShareLookupParticipantsOperation : BRShareOperation {
    NSArray *_userIdentities;
}

@property (copy) id /* block */ lookupParticipantsCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithUserIdentities:(id)a0;

@end
