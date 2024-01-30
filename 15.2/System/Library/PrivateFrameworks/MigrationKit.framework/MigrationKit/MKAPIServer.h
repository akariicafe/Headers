@class MKFileMigrator, MKPlaceholderMigrator, MKContainerMigrator, MKAccountMigrator, MKMessageMigrator, MKCertificate, MKCalendarMigrator, MKContactMigrator, NSDate, MKDisplaySettingMigrator, NSString, MKBookmarkMigrator, MKAnalytics, MKPhotoLibraryMigrator, MKHTTPServer, MKAccessibilitySettingMigrator, MKApplicationMigrator;
@protocol MKAPIServerDelegate;

@interface MKAPIServer : NSObject <MKHTTPServerDelegate, MKGETSRPRouterDelegate, MKGETCertificateRouterDelegate, MKPOSTCertificateRouterDelegate, MKPUTRouterDelegate, MKPOSTClientRouterDelegate, MKPOSTSRPRouterDelegate, MKPOSTProgressRouterDelegate> {
    MKCertificate *_certificate;
    MKHTTPServer *_http;
    MKHTTPServer *_https;
    MKAccountMigrator *_accountMigrator;
    MKMessageMigrator *_messageMigrator;
    MKBookmarkMigrator *_bookmarkMigrator;
    MKApplicationMigrator *_applicationMigrator;
    MKAccessibilitySettingMigrator *_accessibilitySettingMigrator;
    MKDisplaySettingMigrator *_displaySettingMigrator;
    MKContactMigrator *_contactMigrator;
    MKCalendarMigrator *_calendarMigrator;
    MKPhotoLibraryMigrator *_photoLibraryImageMigrator;
    MKPhotoLibraryMigrator *_photoLibraryVideoMigrator;
    MKFileMigrator *_fileMigrator;
    MKPlaceholderMigrator *_placeholderMigrator;
    MKContainerMigrator *_containerMigrator;
    MKAnalytics *_analytics;
    NSDate *_startDate;
}

@property (weak, nonatomic) id<MKAPIServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)router:(id)a0 didReceiveImageChunk:(id)a1 identifier:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5 filename:(id)a6 collection:(id)a7;
- (void)router:(id)a0 didReceiveVideoChunk:(id)a1 identifier:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5 filename:(id)a6 collection:(id)a7;
- (void)router:(id)a0 didReceiveAccountEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveMessageEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveBookmarkEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveApplicationEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceivePlaceholderEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveAccessibilitySettingEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveDisplaySettingEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveVCard:(id)a1;
- (void)router:(id)a0 didReceiveICal:(id)a1;
- (void)router:(id)a0 didReceiveFileChunk:(id)a1 filename:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5;
- (void)router:(id)a0 didReceiveContainer:(id)a1 signature:(id)a2 chunk:(id)a3 filename:(id)a4 offset:(unsigned long long)a5 length:(unsigned long long)a6 total:(unsigned long long)a7 required:(BOOL)a8 excludedFromBackup:(BOOL)a9;
- (void)routerDidRejectClient:(id)a0;
- (void)routerDidAuthenticateClient:(id)a0;
- (void)routerDidRevokeEncryptionKey:(id)a0;
- (void)router:(id)a0 didUpdateProgress:(float)a1 remainingTime:(unsigned long long)a2;
- (void)router:(id)a0 didReceiveClient:(id)a1;
- (void)router:(id)a0 didReceiveCertifciate:(id)a1;
- (void)server:(id)a0 didOpen:(long long)a1;
- (void)serverDidCancel:(id)a0;
- (void)runHTTP;
- (void)runHTTPS:(id)a0;

@end
