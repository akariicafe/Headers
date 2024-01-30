@class NSString, AFBluetoothHeadphoneInEarDetectionState;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {
    AFBluetoothHeadphoneInEarDetectionState *_baseModel;
    BOOL _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsEnabled : 1; unsigned char hasPrimaryEarbudSide : 1; unsigned char hasPrimaryInEarStatus : 1; unsigned char hasSecondaryInEarStatus : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsEnabled:(BOOL)a0;
- (void)setPrimaryInEarStatus:(long long)a0;
- (id)init;
- (void)setPrimaryEarbudSide:(long long)a0;
- (void).cxx_destruct;
- (id)generate;
- (id)initWithBaseModel:(id)a0;
- (void)setSecondaryInEarStatus:(long long)a0;

@end
