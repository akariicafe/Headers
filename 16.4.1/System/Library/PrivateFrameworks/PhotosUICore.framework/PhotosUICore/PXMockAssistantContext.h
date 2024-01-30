@class NSString, NSArray;

@interface PXMockAssistantContext : NSObject <PXAssistantContext> {
    NSArray *_stepContextIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_stepContextWithIdentifier:(id)a0 viewTitle:(id)a1 firstButtonType:(long long)a2;
- (id)initialStepContextIdentifiers;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)a0;
- (id)stepContextForStepContextIdentifier:(id)a0;

@end
