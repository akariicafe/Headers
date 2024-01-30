@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {
    NSMutableArray *_payloadFieldArrays;
    long long _currentPayloadIndex;
    long long _currentFieldIndex;
    MCUIPayloadUserInputField *_currentField;
    BOOL _isFinalField;
}

- (void).cxx_destruct;
- (void)_setCurrentFieldToCurrentIndices;
- (BOOL)currentFieldIsLastInPayload;
- (void)_setIsFinalField;
- (id)initWithUserInput:(id)a0;
- (id)userInputResponses;
- (id)currentField;
- (void)moveToNextField;
- (void)restartCurrentPayload;
- (BOOL)currentFieldIsFinalField;
- (BOOL)currentFieldIsSinglePasswordField;
- (id)responseDictionariesForCurrentPayload;
- (long long)currentPayloadIndex;

@end
