@class NSXPCListenerEndpoint, NSArray, UIDraggingSystemTouchRoutingPolicy, PBItemCollection, NSString;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *touchIDs;
@property (nonatomic) struct CGPoint { double x; double y; } initialCentroid;
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (retain, nonatomic) NSXPCListenerEndpoint *axEndpoint;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (retain, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint;
@property (nonatomic) BOOL supportsSystemDrag;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) BOOL initiatedWithPointer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
