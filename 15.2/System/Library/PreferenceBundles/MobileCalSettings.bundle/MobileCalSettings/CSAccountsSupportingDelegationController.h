@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {
    NSArray *_accountsSupportingDelegation;
    EKEventStore *_eventStore;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)reloadDelegates;
- (id)specifiersForAccountsSupportingDelegation;

@end
