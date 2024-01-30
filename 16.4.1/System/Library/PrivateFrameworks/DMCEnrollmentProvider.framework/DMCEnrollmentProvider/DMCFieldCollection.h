@class NSMutableArray, DMCPayloadUserInputField;

@interface DMCFieldCollection : NSObject {
    NSMutableArray *_payloadFieldArrays;
    long long _currentPayloadIndex;
    long long _currentFieldIndex;
    DMCPayloadUserInputField *_currentField;
    BOOL _isFinalField;
}

- (void).cxx_destruct;
- (id)initWithUserInput:(id)a0;
- (void)moveToNextField;
- (void)_setCurrentFieldToCurrentIndices;
- (void)_setIsFinalField;
- (id)currentField;
- (BOOL)currentFieldIsFinalField;
- (BOOL)currentFieldIsLastInPayload;
- (BOOL)currentFieldIsSinglePasswordField;
- (long long)currentPayloadIndex;
- (id)responseDictionariesForCurrentPayload;
- (void)restartCurrentPayload;
- (id)userInputResponses;

@end
