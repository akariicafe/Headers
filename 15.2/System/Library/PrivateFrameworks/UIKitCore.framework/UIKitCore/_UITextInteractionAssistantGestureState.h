@interface _UITextInteractionAssistantGestureState : NSObject

@property (nonatomic) BOOL hasExternalInteractions;
@property (nonatomic) BOOL viewIsEditable;
@property (nonatomic) BOOL viewCanBecomeEditable;
@property (nonatomic) BOOL isFirstResponder;
@property (nonatomic) long long mode;

- (BOOL)isEqual:(id)a0;

@end
