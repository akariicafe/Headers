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

- (void).cxx_destruct;
- (id)init;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)toggleToNextState;
- (void)playStartRecordingSystemSound;
- (void)playStopRecordingSystemSound;
- (void)switchToggleOff;
- (void)setState:(long long)a0 withModuleItem:(id)a1;
- (void)playSystemSoundWithID:(unsigned int)a0 completion:(id /* block */)a1;
- (void)recognitionDidFinish;
- (void)toggleToNextStateWithModuleItem:(id)a0;
- (void)finishedSession:(id)a0;

@end
