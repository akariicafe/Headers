@class NSString;

@interface SRUIFDialogPhase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_type) long long type;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic, getter=isExpository) BOOL expository;
@property (readonly, nonatomic, getter=isConfirmationDialogPhase) BOOL confirmationDialogPhase;
@property (readonly, nonatomic, getter=isReflectionDialogPhase) BOOL reflectionDialogPhase;
@property (readonly, nonatomic, getter=isClarificationDialogPhase) BOOL clarificationDialogPhase;
@property (readonly, nonatomic, getter=isConfirmedDialogPhase) BOOL confirmedDialogPhase;
@property (readonly, nonatomic, getter=isCancelledDialogPhase) BOOL cancelledDialogPhase;
@property (readonly, nonatomic, getter=isUserRequestDialogPhase) BOOL userRequestDialogPhase;
@property (readonly, nonatomic, getter=isErrorDialogPhase) BOOL errorDialogPhase;
@property (readonly, nonatomic, getter=isCompletionDialogPhase) BOOL completionDialogPhase;
@property (readonly, nonatomic, getter=isSummaryDialogPhase) BOOL summaryDialogPhase;
@property (readonly, nonatomic) NSString *aceDialogPhaseValue;

+ (id)userRequestDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)a0;
+ (id)acknowledgementDialogPhase;
+ (id)statusDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)summaryDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)errorDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)_dialogPhaseWithType:(long long)a0;
+ (id)completionDialogPhase;
+ (id)reflectionDialogPhase;

- (id)_initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToDialogPhase:(id)a0;
- (BOOL)replacesPreviousSnippetContents;
- (BOOL)isPossiblyPartOfMultiTurnRequest;

@end
