@class SHCatalog, SHMatcherRequest, SHSession, SHManagedSessionDriver;
@protocol SHMatcher, SHSessionDelegate;

@interface SHManagedSession : NSObject

@property (readonly, nonatomic) SHSession *session;
@property (readonly, nonatomic) id<SHMatcher> shazamServiceConnection;
@property (readonly, nonatomic) SHManagedSessionDriver *sessionDriver;
@property (retain, nonatomic) SHMatcherRequest *inflightRequest;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (nonatomic) BOOL sendNotifications;

- (id)init;
- (void).cxx_destruct;
- (void)stopMatchingAmbientAudioSnippet;
- (id)initWithCatalog:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2 serviceConnection:(id)a3;
- (id)initWithPartnerName:(id)a0;
- (BOOL)isUsingCustomCatalog:(id)a0;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;

@end
