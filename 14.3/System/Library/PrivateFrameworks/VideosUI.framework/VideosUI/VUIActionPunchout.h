@class WLKChannelDetails, NSString, NSURL, IKAppContext, VUIContentMetadata;

@interface VUIActionPunchout : VUIAction

@property (nonatomic) BOOL isPlaybackURL;
@property (copy, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSURL *punchoutURL;
@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (nonatomic) BOOL isEntitledToPlay;
@property (retain, nonatomic) VUIContentMetadata *contentMetadata;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *referenceID;
@property (retain, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (BOOL)_isValidAppInstalled;
- (void)_openAirplayPicker:(id /* block */)a0;
- (void)_startAppInstallFlow:(id /* block */)a0;
- (void)_openPunchoutURL:(id /* block */)a0;

@end
