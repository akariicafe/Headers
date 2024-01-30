@class NSString;

@interface DADiagnosticResponder : NSObject <DKBrightnessResponder, DKVolumeHUDResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)enableVolumeHUD:(BOOL)a0;

@end
