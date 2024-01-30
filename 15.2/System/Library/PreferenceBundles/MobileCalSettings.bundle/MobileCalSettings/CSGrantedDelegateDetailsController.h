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

- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)modalCancelPressed:(id)a0;
- (void)modalSavePressed:(id)a0;
- (id)initInAddDelegateMode:(BOOL)a0;
- (id)enabledWriteAccess:(id)a0;
- (void)setEnabledWriteAccess:(id)a0 specifier:(id)a1;
- (void)removeDelegateTapped:(id)a0;

@end
