@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {
    NSArray *_accountsSupportingDelegation;
    EKEventStore *_eventStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)reloadDelegates;
- (id)specifiersForAccountsSupportingDelegation;

@end
