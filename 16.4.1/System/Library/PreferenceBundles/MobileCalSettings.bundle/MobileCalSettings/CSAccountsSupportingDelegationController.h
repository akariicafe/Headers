@class NSArray, EKEventStore;

@interface CSAccountsSupportingDelegationController : PSListController {
    NSArray *_accountsSupportingDelegation;
    EKEventStore *_eventStore;
}

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)reloadDelegates;
- (id)specifiersForAccountsSupportingDelegation;

@end
