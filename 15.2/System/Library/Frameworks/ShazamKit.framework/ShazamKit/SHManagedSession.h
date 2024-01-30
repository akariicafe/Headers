@class SHSession, SHCatalog, SHManagedShazamCatalog;
@protocol SHSessionDelegate;

@interface SHManagedSession : NSObject

@property (retain, nonatomic) SHSession *session;
@property (retain, nonatomic) SHManagedShazamCatalog *managedShazamCatalog;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (nonatomic) BOOL sendNotifications;

- (void).cxx_destruct;
- (id)init;
- (void)stopMatchingAmbientAudioSnippet;
- (void)matchAmbientAudioSnippet;
- (id)initWithPartnerName:(id)a0;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;

@end
