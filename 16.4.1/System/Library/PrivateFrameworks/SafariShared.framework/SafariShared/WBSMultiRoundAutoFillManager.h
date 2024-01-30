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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)a0;
- (unsigned long long)currentAutoFillAttemptTrigger;
- (void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)a0 autoFillBlock:(id /* block */)a1;
- (BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)a0 requestType:(unsigned long long)a1;
- (void)didEditFormText;
- (void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)a0;
- (BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)a0;

@end
