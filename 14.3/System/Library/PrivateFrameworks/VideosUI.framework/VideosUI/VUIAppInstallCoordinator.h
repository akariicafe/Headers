@class WLKChannelDetails, NSString, VUIAppInstallerViewController, NSUUID, VUIAccessViewController;

@interface VUIAppInstallCoordinator : NSObject

@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) VUIAppInstallerViewController *installerViewController;
@property (retain, nonatomic) VUIAccessViewController *accessViewController;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_installAppWithChannel:(id)a0 completion:(id /* block */)a1;
- (id)initWithChannelDetails:(id)a0 contentTitle:(id)a1;
- (void)installAppWithCompletion:(id /* block */)a0;

@end
