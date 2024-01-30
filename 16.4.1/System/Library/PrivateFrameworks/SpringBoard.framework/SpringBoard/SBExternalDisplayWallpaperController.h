@class NSString, SBFWindow, SBFZStackParticipant;

@interface SBExternalDisplayWallpaperController : NSObject <SBFZStackParticipantDelegate>

@property (retain, nonatomic) SBFWindow *window;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
