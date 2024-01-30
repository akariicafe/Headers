@class BCSNotificationServiceConnection, BCSParsingServiceConnection;

@interface BCSQRCodeParser : NSObject {
    BCSParsingServiceConnection *_parsingServiceConnection;
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

@property (readonly, nonatomic) BCSNotificationServiceConnection *notificationServiceConnection;

- (void).cxx_destruct;
- (void)parseCodeFromImage:(struct CGImage { } *)a0 completionHandler:(id /* block */)a1;
- (void)stopQRCodeParsingSession;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)_parseMetadataObject:(id)a0 reply:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_qrCodeFeatureFromImage:(struct CGImage { } *)a0;
- (id)_payloadForMRCObject:(id)a0;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)a0 completionHandler:(id /* block */)a1;
- (void)parseCodeFromString:(id)a0 completionHandler:(id /* block */)a1;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage { } *)a0 completion:(id /* block */)a1;

@end
