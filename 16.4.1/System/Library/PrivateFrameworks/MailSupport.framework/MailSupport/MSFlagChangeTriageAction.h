@class ECMessageFlags;
@protocol MSFlagChangeTriageActionDelegate;

@interface MSFlagChangeTriageAction : MSTriageAction

@property (readonly, nonatomic) ECMessageFlags *messageFlags;
@property (readonly, nonatomic) BOOL flagState;
@property (readonly, nonatomic) long long reason;
@property (readonly, weak, nonatomic) id<MSFlagChangeTriageActionDelegate> delegate;

- (id)_changeAction;
- (void)_toggleFlagWithBuilder:(id)a0;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 reason:(long long)a2;

@end
