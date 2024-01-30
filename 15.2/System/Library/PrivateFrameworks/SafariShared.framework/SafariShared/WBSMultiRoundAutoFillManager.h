@class NSString, NSSet, NSTimer, NSMutableSet, WBSFormMetadata;

@interface WBSMultiRoundAutoFillManager : NSObject {
    unsigned long long _autoFillAttemptTrigger;
    WBSFormMetadata *_formMetadataFromPreviousAutoFillAttempt;
    BOOL _userDidInteractWithForm;
    unsigned long long _numberOfFollowUpAutoFillAttempts;
    NSTimer *_timerForFollowUpAutoFill;
    NSMutableSet *_controlUniqueIDToBeIgnoredByFollowUpAutoFill;
}

@property (copy, nonatomic) NSString *addressSetLabelUsedDuringFirstAutoFillPass;
@property (copy, nonatomic) NSSet *addressBookPropertiesThatCanBeFilled;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)a0;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)a0;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)a0 autoFillBlock:(id /* block */)a1;
- (void)didEditFormText;
- (BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)a0 requestType:(unsigned long long)a1;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)a0;

@end
