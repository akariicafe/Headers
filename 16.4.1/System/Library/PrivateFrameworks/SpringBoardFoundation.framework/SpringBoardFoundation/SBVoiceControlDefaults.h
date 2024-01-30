@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disableVoiceControlForBluetoothRequests;
@property (readonly, nonatomic) BOOL disableHandlerActions;
@property (readonly, nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;

@end
