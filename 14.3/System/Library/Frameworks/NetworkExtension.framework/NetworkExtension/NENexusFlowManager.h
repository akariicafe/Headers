@class NSMutableDictionary, NSObject;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject

@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *defaultInputProtocol;
@property (retain) NSMutableDictionary *userChannels;
@property (retain) NSObject<OS_nw_channel> *kernelChannel;

- (void).cxx_destruct;
- (void)dealloc;

@end
