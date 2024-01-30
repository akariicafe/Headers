@class NSString, SNFileServerInfo;

@interface SNFileServerDiscoveryResult : NSObject <SNResult>

@property (retain, nonatomic) SNFileServerInfo *serverInfo;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServerInfo:(id)a0 state:(unsigned long long)a1;

@end
