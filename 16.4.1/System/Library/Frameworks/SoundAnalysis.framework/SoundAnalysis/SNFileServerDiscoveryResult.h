@class NSString, SNFileServerInfo;

@interface SNFileServerDiscoveryResult : NSObject <SNResult> {
    SNFileServerInfo *_serverInfo;
    unsigned long long _state;
}

@property (readonly) SNFileServerInfo *serverInfo;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
