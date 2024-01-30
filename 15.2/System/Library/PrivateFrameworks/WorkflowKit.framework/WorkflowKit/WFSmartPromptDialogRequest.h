@class WFDialogButton, WFContentCollection, NSData, WFSmartPromptConfiguration;

@interface WFSmartPromptDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *archivedSourceContentCollection;
@property (retain, nonatomic) WFContentCollection *cachedSourceContentCollection;
@property (readonly, copy, nonatomic) WFSmartPromptConfiguration *configuration;
@property (readonly, copy, nonatomic) WFDialogButton *previewButton;
@property (readonly, copy, nonatomic) WFDialogButton *allowOnceButton;
@property (readonly, copy, nonatomic) WFDialogButton *allowAlwaysButton;
@property (readonly, copy, nonatomic) WFDialogButton *denyButton;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 attribution:(id)a1;
- (BOOL)shouldCenterPrompt;

@end
