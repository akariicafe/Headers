@class EKSource, PSSpecifier, EKEventStore, CalGrantedDelegate, NSNumber;
@protocol DelegateDetailProtocol;

@interface CSGrantedDelegateDetailsController : PSListController {
    BOOL _addDelegateMode;
    EKEventStore *_eventStore;
    PSSpecifier *_readWriteSwitch;
    PSSpecifier *_removeDelegateButton;
    NSNumber *_currentPermission;
    id<DelegateDetailProtocol> _delegateFromSpecifier;
    EKSource *_source;
    CalGrantedDelegate *_grantedDelegate;
}

- (void)setSpecifier:(id)a0;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)enabledWriteAccess:(id)a0;
- (id)initInAddDelegateMode:(BOOL)a0;
- (void)modalCancelPressed:(id)a0;
- (void)modalSavePressed:(id)a0;
- (void)removeDelegateTapped:(id)a0;
- (void)setEnabledWriteAccess:(id)a0 specifier:(id)a1;

@end
