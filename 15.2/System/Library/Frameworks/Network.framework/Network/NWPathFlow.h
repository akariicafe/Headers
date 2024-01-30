@class NSUUID, NWInterface, NWEndpoint, NSObject;
@protocol OS_nw_path_flow;

@interface NWPathFlow : NSObject <NWPrettyDescription>

@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow;
@property (readonly, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NWEndpoint *localEndpoint;
@property (readonly, nonatomic) NWEndpoint *remoteEndpoint;
@property (readonly, nonatomic) NSUUID *flowID;
@property (readonly, nonatomic) NSUUID *nexusAgent;
@property (readonly, nonatomic) NSUUID *nexusInstance;
@property (readonly, nonatomic) unsigned int nexusPort;
@property (readonly, nonatomic, getter=isViable) BOOL viable;
@property (readonly, nonatomic, getter=isAssigned) BOOL assigned;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic, getter=isDirect) BOOL direct;
@property (readonly, nonatomic, getter=isDefunct) BOOL defunct;
@property (readonly, nonatomic) BOOL supportsIPv4;
@property (readonly, nonatomic) BOOL supportsIPv6;

- (id)privateDescription;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPathFlow:(id)a0;

@end
