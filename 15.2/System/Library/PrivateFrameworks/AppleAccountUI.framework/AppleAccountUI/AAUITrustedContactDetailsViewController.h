@class AATrustedContactDetailsViewModel, AALocalContactInfo;
@protocol AAUITrustedContactDetailsActionHandler;

@interface AAUITrustedContactDetailsViewController : PSListController {
    id<AAUITrustedContactDetailsActionHandler> _actionHandler;
    AALocalContactInfo *_contact;
    AATrustedContactDetailsViewModel *_viewModel;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 viewModel:(id)a1 actionHandler:(id)a2;
- (id)_bigContactSpecifier;
- (id)_optionsGroupSpecifier;
- (id)_detailsRowSpecifier;
- (id)_primaryActionRowSpecifier;
- (id)_secondaryActionRowSpecifier;
- (id)_destructiveActionRowSpecifier;
- (void)_doPrimaryAction:(id)a0;
- (void)_doSecondaryAction:(id)a0;
- (void)_showDestructiveAlert:(id)a0;
- (void)_doDestructiveAction:(id)a0;

@end
