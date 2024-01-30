@interface VCDuplicationHandler : NSObject {
    unsigned char _duplicationState;
    BOOL _moreThanOneConnectionAvailable;
    struct { BOOL isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; BOOL isDuplicationDisabledDueToAlert; } _localAlertInfo;
    struct { BOOL isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; BOOL isDuplicationDisabledDueToAlert; } _remoteAlertInfo;
}

@property (readonly) unsigned char duplicationReason;
@property (readonly) BOOL isDuplicationEnabled;
@property (readonly) BOOL isDuplicationPending;
@property BOOL isRemotePreAzul;
@property BOOL iRATDuplicationEnabled;

- (struct { BOOL x0; BOOL x1; int x2; })handleDuplicationStateUpdateEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0;
- (void)updateDuplicationStateForMissingPacketsUpdateEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForReceivingPacketsUpdateEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForRemoteWRMSuggestingCellularEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForAlertStateUpdatedEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)updateDuplicationStateForConnectionArrayUpdatedEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)enableDuplication;
- (void)disableDuplication;
- (void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(struct { unsigned char x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; })a0 updateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a1;
- (void)stopRemoteDuplicationAndUpdateResult:(struct { BOOL x0; BOOL x1; int x2; } *)a0;
- (BOOL)updateDuplicationStateWithAlertInfo:(BOOL)a0;
- (BOOL)isDuplicationDueToWRMSuggestion;

@end
