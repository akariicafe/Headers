@class NSString, AFUserUtterance, NSArray, NSMutableDictionary;

@interface SiriSharedUIUserUtteranceEditingDataManager : NSObject <SiriSharedUIUserUtteranceEditingDataManaging> {
    NSString *_refId;
    NSArray *_alternativeDisplayStrings;
    NSMutableDictionary *_userSelectionResultsMap;
    BOOL _clientAlternativePresented;
}

@property (readonly, nonatomic) AFUserUtterance *userUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)attributedStringAtIndex:(long long)a0;
- (long long)numberOfAlternativeUtterances;
- (void)_createAlternativeDisplayStringsAndMap;
- (void)_updateSelectionResults:(id)a0 interactionId:(id)a1;
- (id)initWithUserUtterance:(id)a0 backingAceObjectRefId:(id)a1;
- (BOOL)isEditedTextSameAsUtterance:(id)a0;
- (id)selectionResultsForAlternateTextAtIndex:(long long)a0;
- (id)selectionResultsForEditedText:(id)a0;

@end
