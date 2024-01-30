@class NSString, NSMutableDictionary, COMeshLocalNode, RPCompanionLinkClient, NSUUID, COConstituent;
@protocol COMeshNodeDelegate;

@interface COMeshNode : NSObject <NSCopying>

@property (readonly, nonatomic) RPCompanionLinkClient *client;
@property (weak, nonatomic) COMeshLocalNode *parent;
@property (copy, nonatomic) NSString *meshName;
@property (copy, nonatomic) id /* block */ recorder;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) COConstituent *remote;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) double averageRequestTime;
@property (readonly, copy, nonatomic) NSMutableDictionary *counters;
@property (readonly, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly, nonatomic) COConstituent *source;
@property (weak, nonatomic) id<COMeshNodeDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (unsigned long long)hash;
- (id)initWithCompanionLinkClient:(id)a0 source:(id)a1;
- (void)sendMeshCommand:(id)a0;
- (void)sendMeshRequest:(id)a0;
- (id)_eventIDForClass:(Class)a0;
- (id)_commandPayloadFromRapportRepresentation:(id)a0;
- (id)_serializedDataForCommand:(id)a0;
- (void)sendMeshRequest:(id)a0 responseCallback:(id /* block */)a1;
- (void)_handleResponseToRequest:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 error:(id)a3 responseCallback:(id /* block */)a4 at:(unsigned long long)a5;

@end
