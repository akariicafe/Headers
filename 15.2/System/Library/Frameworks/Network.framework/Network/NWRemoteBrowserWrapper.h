@class NSUUID, NWBrowser;

@interface NWRemoteBrowserWrapper : NSObject

@property (retain) NSUUID *clientID;
@property (retain) NWBrowser *browser;

- (void).cxx_destruct;

@end
