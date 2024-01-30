@class NWEndpoint, NSObject;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>

@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) BOOL noProxy;
@property (nonatomic) int multipathService;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) BOOL tfo;
@property (nonatomic) BOOL tfoNoCookie;
@property (nonatomic) int dataMode;
@property (nonatomic) unsigned long long fallbackMode;
@property (nonatomic) BOOL prohibitDirect;
@property (nonatomic) BOOL disablePathFallback;

- (id)privateDescription;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)fastOpenForceEnable;
- (void)setFastOpenForceEnable:(BOOL)a0;
- (id)initWithCTransform:(id)a0;
- (void)disableProtocol:(struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *)a0;
- (void)clearProtocolsAtLevel:(int)a0;
- (void)appendProtocol:(id)a0 atLevel:(int)a1;

@end
