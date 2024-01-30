@class NSURL, NSString, WFFileRepresentation;

@interface WFShortcutExtractor : NSObject

@property (readonly, nonatomic) long long fileAdoptionOptions;
@property (readonly, nonatomic) WFFileRepresentation *extractingFile;
@property (readonly, nonatomic) NSURL *extractingURL;
@property (readonly, copy, nonatomic) NSString *suggestedName;
@property (readonly, copy, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) BOOL allowsOldFormatFile;
@property (readonly, nonatomic) BOOL skipsMaliciousScanning;

+ (BOOL)isShortcutFileType:(id)a0;

- (void).cxx_destruct;
- (void)extractShortcutFile:(id)a0 completion:(id /* block */)a1;
- (void)extractWorkflowFile:(id)a0 completion:(id /* block */)a1;
- (void)extractRemoteShortcutFileAtURL:(id)a0 completion:(id /* block */)a1;
- (void)extractShortcutWithCompletion:(id /* block */)a0;
- (void)extractSignedShortcutFile:(id)a0 allowsRetryIfExpired:(BOOL)a1 completion:(id /* block */)a2;
- (void)extractSignedShortcutFile:(id)a0 completion:(id /* block */)a1;
- (void)extractWorkflowFile:(id)a0 shortcutName:(id)a1 shortcutFileContentType:(long long)a2 iCloudIdentifier:(id)a3 completion:(id /* block */)a4;
- (id)initWithFile:(id)a0 allowsOldFormatFile:(BOOL)a1 skipsMaliciousScanning:(BOOL)a2 suggestedName:(id)a3 sourceApplication:(id)a4;
- (id)initWithFile:(id)a0 allowsOldFormatFile:(BOOL)a1 suggestedName:(id)a2 sourceApplication:(id)a3;
- (id)initWithFile:(id)a0 suggestedName:(id)a1 sourceApplication:(id)a2;
- (id)initWithURL:(id)a0 allowsOldFormatFile:(BOOL)a1 fileAdoptionOptions:(long long)a2 suggestedName:(id)a3 sourceApplication:(id)a4;
- (id)initWithURL:(id)a0 allowsOldFormatFile:(BOOL)a1 skipsMaliciousScanning:(BOOL)a2 fileAdoptionOptions:(long long)a3 suggestedName:(id)a4 sourceApplication:(id)a5;
- (id)initWithURL:(id)a0 allowsOldFormatFile:(BOOL)a1 skipsMaliciousScanning:(BOOL)a2 suggestedName:(id)a3 sourceApplication:(id)a4;
- (id)initWithURL:(id)a0 allowsOldFormatFile:(BOOL)a1 suggestedName:(id)a2 sourceApplication:(id)a3;
- (id)initWithURL:(id)a0 fileAdoptionOptions:(long long)a1 suggestedName:(id)a2 sourceApplication:(id)a3;
- (id)initWithURL:(id)a0 suggestedName:(id)a1 sourceApplication:(id)a2;

@end
