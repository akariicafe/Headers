@class NSString, WFDialogButton;

@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) WFDialogButton *yesButton;
@property (readonly, copy, nonatomic) WFDialogButton *noButton;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionMetadata:(id)a0 showPrompt:(BOOL)a1 dialogString:(id)a2 viewSnippet:(id)a3 yesText:(id)a4 noText:(id)a5 attribution:(id)a6;
- (id)initWithActionParameterMetadata:(id)a0 dialogString:(id)a1 viewSnippet:(id)a2 attribution:(id)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 viewSnippet:(id)a2 yesText:(id)a3 noText:(id)a4 attribution:(id)a5;

@end
