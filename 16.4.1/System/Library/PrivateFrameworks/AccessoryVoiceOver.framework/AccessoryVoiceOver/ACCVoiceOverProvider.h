@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol ACCVoiceOverXPCServerProtocol, ACCVoiceOverProviderProtocol;

@interface ACCVoiceOverProvider : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<ACCVoiceOverXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (weak, nonatomic) id<ACCVoiceOverProviderProtocol> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)connectToServer;
- (void).cxx_destruct;
- (BOOL)calculateDesiredState:(id)a0;
- (void)accessoryVoiceOver:(id)a0 performAction:(int)a1 parameters:(id)a2;
- (void)accessoryVoiceOver:(id)a0 requestConfiguration:(int)a1 param:(id)a2;
- (void)accessoryVoiceOver:(id)a0 setContext:(int)a1;
- (void)accessoryVoiceOver:(id)a0 setEnabled:(BOOL)a1;
- (void)accessoryVoiceOverAttached:(id)a0;
- (void)accessoryVoiceOverDetachAll;
- (void)accessoryVoiceOverDetached:(id)a0;
- (void)accessoryVoiceOverStartCursorInformationUpdate:(id)a0;
- (void)accessoryVoiceOverStartInformationUpdate:(id)a0;
- (void)accessoryVoiceOverStopCursorInformationUpdate:(id)a0;
- (void)accessoryVoiceOverStopInformationUpdate:(id)a0;
- (void)updateVoiceOverCursorInfo:(id)a0;
- (void)updateVoiceOverInfo:(id)a0;

@end
