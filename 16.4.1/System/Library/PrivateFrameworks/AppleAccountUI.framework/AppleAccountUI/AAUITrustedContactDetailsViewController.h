@class AATrustedContactDetailsViewModel, AALocalContactInfo;
@protocol AAUITrustedContactDetailsActionHandler;

@interface AAUITrustedContactDetailsViewController : PSListController {
    id<AAUITrustedContactDetailsActionHandler> _actionHandler;
    AALocalContactInfo *_contact;
    AATrustedContactDetailsViewModel *_viewModel;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)_bigContactSpecifier;
- (id)_destructiveActionRowSpecifier;
- (id)_detailsRowSpecifier;
- (void)_doDestructiveAction:(id)a0;
- (void)_doPrimaryAction:(id)a0;
- (void)_doSecondaryAction:(id)a0;
- (id)_optionsGroupSpecifier;
- (id)_primaryActionRowSpecifier;
- (id)_secondaryActionRowSpecifier;
- (void)_showDestructiveAlert:(id)a0;
- (id)initWithContact:(id)a0 viewModel:(id)a1 actionHandler:(id)a2;

@end
