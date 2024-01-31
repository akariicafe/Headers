@class PRUISIncomingCallSnapshotDefinition;

@interface CNPRUISIncomingCallSnapshotDefinition : NSObject

@property (readonly, nonatomic) PRUISIncomingCallSnapshotDefinition *wrappedDefinition;

+ (id)compositeSnapshotDefinitionWithContext:(id)a0 attachmentIdentifiers:(id)a1;
+ (id)contentsAndObscurableContentSnapshotDefinitionWithContext:(id)a0 attachmentIdentifiers:(id)a1;
+ (id)contentsAndOverlayContentSnapshotDefinitionWithContext:(id)a0 attachmentIdentifiers:(id)a1;
+ (id)contentsOnlySnapshotDefinitionWithContext:(id)a0 attachmentIdentifiers:(id)a1;

- (void).cxx_destruct;
- (id)initWithWrappedDefinition:(id)a0;
- (id)levelSets;

@end
