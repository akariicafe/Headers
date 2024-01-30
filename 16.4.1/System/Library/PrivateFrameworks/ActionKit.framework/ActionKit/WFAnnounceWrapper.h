@class NSURL, NSString, ANAnnounce;

@interface WFAnnounceWrapper : NSObject

@property (class, readonly, nonatomic) NSURL *sharedAnnouncementsDirectoryURL;
@property (class, readonly, nonatomic) NSString *afPreferencesLanguageCode;
@property (class, readonly, nonatomic) NSString *currentSiriVoiceVSAssetName;

@property (readonly, nonatomic) ANAnnounce *announce;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)prewarmWithHandler:(id /* block */)a0;
- (void)requestAnnouncementWithAudioFileURL:(id)a0 homeAreaDescriptor:(id)a1 completionHandler:(id /* block */)a2;

@end
