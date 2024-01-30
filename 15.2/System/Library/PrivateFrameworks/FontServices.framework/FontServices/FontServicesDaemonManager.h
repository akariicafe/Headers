@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (void)fontAddedInfo:(id)a0 addedURLStrings:(id)a1 removedURLStrings:(id)a2;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void)checkinForFontPicker:(id /* block */)a0;
- (void)scheduleFontFilesDeletion:(id)a0;
- (void)requestFonts:(id)a0 reply:(id /* block */)a1;
- (void)checkinForWebKitProcess:(id)a0 reply:(id /* block */)a1;
- (void)synchronizeFontAssets:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestFonts:(id)a0 forClient:(id)a1;
- (void)checkin:(id /* block */)a0;
- (void)fontChanged:(id)a0 reply:(id /* block */)a1;
- (void)resetIssuedFontsFor:(id)a0;
- (void)updatingUserFonts:(id /* block */)a0;

@end
