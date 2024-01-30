@class NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRingerMuted:(BOOL)a0;
- (BOOL)isUILocked;
- (BOOL)isOrientationLocked;
- (void)unlockOrientation;
- (BOOL)isRingerMuted;
- (void)lockOrientation;

@end
