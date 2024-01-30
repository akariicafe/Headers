@class _TVRCMRTelevisionWrapper, _TVRCMROriginWrapper, _TVRCMRVirtualTouchDeviceWrapper;

@interface _TVRCMediaRemoteEventTranslator : NSObject

@property (weak, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (weak, nonatomic) _TVRCMROriginWrapper *origin;
@property (readonly, nonatomic) _TVRCMRVirtualTouchDeviceWrapper *touchDevice;

- (void).cxx_destruct;
- (void)sendButtonEvent:(id)a0;
- (BOOL)_isMediaButtonEvent:(id)a0;
- (void)sendTouchEvent:(id)a0 withDeviceID:(unsigned long long)a1;
- (unsigned int)_commandForMediaButtonEvent:(id)a0;
- (id)_commandOptionsForMediaButtonEvent:(id)a0 command:(unsigned int)a1;
- (struct _MRHIDButtonEvent { unsigned int x0; unsigned int x1; BOOL x2; })_createMRHIDButtonEventTemplateWithButtonType:(long long)a0;
- (struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x0; float x1; } x0; float x1[2]; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; })_createMRHIDTouchEvent:(id)a0;

@end
