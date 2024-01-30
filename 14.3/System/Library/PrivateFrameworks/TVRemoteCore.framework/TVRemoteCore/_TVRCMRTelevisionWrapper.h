@class NSString, NSDictionary, _TVRCMROriginWrapper;

@interface _TVRCMRTelevisionWrapper : NSObject {
    void *_television;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (readonly, copy, nonatomic) NSString *softwareVersion;
@property (readonly) BOOL isPairingAllowed;
@property (readonly, nonatomic) unsigned int voiceRecordingState;
@property (readonly, copy, nonatomic) _TVRCMROriginWrapper *customOrigin;

+ (void)deletePairedDevice:(id)a0;
+ (id)wrapperWithTelevision:(void *)a0;

- (void)insertText:(id)a0;
- (void)connect;
- (void)disconnect;
- (void)deleteBackward;
- (void)dealloc;
- (id)initWithTelevision:(void *)a0;
- (void)clearText;
- (void)setConnectionStateHandler:(id /* block */)a0;
- (id)description;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })a0;
- (void)setText:(id)a0;
- (void)setNameChangedHandler:(id /* block */)a0;
- (void)setPairingHandler:(id /* block */)a0;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2]; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; })a0 withDeviceID:(unsigned long long)a1;
- (void)sendGameControllerDigitizerEvent:(id)a0 withControllerID:(unsigned long long)a1;
- (void)setWantsNowPlayingUpdates:(BOOL)a0;
- (void)registerVirtualTouchDevice:(id)a0 completion:(id /* block */)a1;
- (void)setVoiceRecordingStateHandler:(id /* block */)a0;
- (void)registerVirtualVoiceInputDevice:(id)a0 completion:(id /* block */)a1;
- (void)sendAudioData:(id)a0 withDeviceID:(unsigned int)a1;
- (void)setWantsVolumeControlAvailabilityUpdates:(BOOL)a0;
- (void)setGameControllerInputModeHandler:(id /* block */)a0;
- (void)registerGameControllerDevice:(id /* block */)a0;
- (void)unregisterGameControllerDevice:(unsigned long long)a0;
- (void)sendGameControllerButtonEventWithButton:(unsigned long long)a0 isDown:(BOOL)a1 controllerID:(unsigned long long)a2;
- (void)setTextEditingHandler:(id /* block */)a0;
- (void)getTextEditingSession:(id /* block */)a0;
- (void)setRTISessionHandler:(id /* block */)a0;
- (void)getCurrentRTISourceSession:(id /* block */)a0;

@end
