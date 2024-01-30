@class MKDisplaySettingMigrator, MKProgress, MKPhotoLibraryMigrator, MKAccessibilitySettingMigrator, MKPlaceholderMigrator, MKContainerMigrator, MKHTTPServer, MKContactMigrator, NSString, MKDiagnosticsMigrator, NSHashTable, NSDate, MKContext, MKFileMigrator, MKCertificate, MKPhotoLibraryAlbumMigrator, MKApplicationMigrator, MKAccountMigrator, MKCalendarMigrator, MKGETStatusRouter, MKBookmarkMigrator, MKMessageMigrator;
@protocol MKAPIServerDelegate;

@interface MKAPIServer : NSObject <MKHTTPServerDelegate, MKGETSRPRouterDelegate, MKGETCertificateRouterDelegate, MKPOSTCertificateRouterDelegate, MKPUTRouterDelegate, MKPOSTClientRouterDelegate, MKPOSTSRPRouterDelegate, MKPOSTProgressRouterDelegate, MKMigratorDelegate> {
    BOOL _success;
    BOOL _isImporting;
    MKCertificate *_certificate;
    MKHTTPServer *_http;
    MKHTTPServer *_https;
    MKProgress *_progress;
    MKContext *_context;
    MKGETStatusRouter *_getStatusRouter;
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
    MKPhotoLibraryAlbumMigrator *_photoLibraryAlbumMigrator;
    MKFileMigrator *_fileMigrator;
    MKPlaceholderMigrator *_placeholderMigrator;
    MKContainerMigrator *_containerMigrator;
    MKDiagnosticsMigrator *_diagnosticsMigrator;
    NSHashTable *_migrators;
    NSDate *_startDate;
}

@property (weak, nonatomic) id<MKAPIServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setImportContext:(id)a0;
- (void)import;
- (void)server:(id)a0 didOpen:(long long)a1;
- (void)runHTTP;
- (void)migratorDidComplete:(id)a0;
- (void)migratorDidExecuteOperation:(id)a0;
- (void)migratorWillExecuteOperation:(id)a0;
- (void)processPerformanceMetrics;
- (void)router:(id)a0 didReceiveAccessibilitySettingEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveAccountEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveApplicationEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveBookmarkEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveCertifciate:(id)a1;
- (void)router:(id)a0 didReceiveClient:(id)a1;
- (void)router:(id)a0 didReceiveContainer:(id)a1 signature:(id)a2 chunk:(id)a3 filename:(id)a4 offset:(unsigned long long)a5 length:(unsigned long long)a6 total:(unsigned long long)a7 required:(BOOL)a8 excludedFromBackup:(BOOL)a9;
- (void)router:(id)a0 didReceiveDiagnosticsFile:(id)a1 filename:(id)a2;
- (void)router:(id)a0 didReceiveDisplaySettingEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveFileChunk:(id)a1 filename:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5;
- (void)router:(id)a0 didReceiveICal:(id)a1;
- (void)router:(id)a0 didReceiveImageChunk:(id)a1 identifier:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5 filename:(id)a6 collection:(id)a7;
- (void)router:(id)a0 didReceiveMessageEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceivePerformanceMetrics:(id)a1;
- (void)router:(id)a0 didReceivePlaceholderEncodedInJSON:(id)a1;
- (void)router:(id)a0 didReceiveVCard:(id)a1;
- (void)router:(id)a0 didReceiveVideoChunk:(id)a1 identifier:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 total:(unsigned long long)a5 filename:(id)a6 collection:(id)a7;
- (void)router:(id)a0 didUpdateProgress:(float)a1 remainingTime:(unsigned long long)a2 state:(int)a3;
- (void)routerDidAuthenticateClient:(id)a0;
- (void)routerDidRejectClient:(id)a0;
- (void)routerDidRevokeEncryptionKey:(id)a0;
- (void)runHTTPS:(id)a0;
- (void)serverDidCancel:(id)a0;
- (void)setImportContexts;

@end
