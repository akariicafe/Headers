@class VUIAppContext, NSString, WLKChannelDetails, NSURL;

@interface VUIActionPunchout : VUIAction

@property (nonatomic) BOOL isPlaybackURL;
@property (copy, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) VUIAppContext *appContext;
@property (nonatomic) BOOL shouldAvoidInstallSheet;
@property (retain, nonatomic) NSURL *punchoutURL;
@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (nonatomic) BOOL isEntitledToPlay;
@property (nonatomic) BOOL isAdultContent;
@property (retain, nonatomic) NSString *mediaType;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *referenceID;
@property (retain, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (BOOL)canPerformNow;
- (void)_openPunchoutURL:(id /* block */)a0;
- (BOOL)_isValidAppInstalled;
- (void)_openAirplayPicker:(id /* block */)a0;
- (void)_startAppInstallFlow:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_showErrorMessageAlert:(id)a0;

@end
