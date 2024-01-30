@class NSString, SHManagedSession;
@protocol SHToggleManagerDelegate, SHModuleItem;

@interface SHToggleManager : NSObject <SHSessionDelegate>

@property (nonatomic) long long toggleState;
@property (retain, nonatomic) id<SHModuleItem> currentModuleItem;
@property (readonly, nonatomic) SHManagedSession *session;
@property (weak, nonatomic) id<SHToggleManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL isToggleOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;
- (void)switchToggleOff;
- (void)playStartRecordingSystemSound;
- (void)playStopRecordingSystemSound;
- (void)playSystemSoundWithID:(unsigned int)a0 completion:(id /* block */)a1;
- (void)recognitionDidFinish;
- (void)setState:(long long)a0 withModuleItem:(id)a1;
- (void)toggleToNextState;
- (void)toggleToNextStateWithModuleItem:(id)a0;

@end
