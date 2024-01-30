@class NSString, NSNumber, NSDictionary;

@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSNumber *protocolVersionNumber;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) unsigned int clientType;
@property (readonly, nonatomic) BOOL isQREnabled;
@property (readonly, nonatomic) BOOL isUsingQRDirectly;
@property (readonly, nonatomic) BOOL isInitiator;
@property (readonly, nonatomic) BOOL isScreenSharingSessionType;
@property (readonly, nonatomic) BOOL isWithDefaultPairedDevice;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned int linkType;
@property (readonly, nonatomic) unsigned int linkProtocol;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) unsigned int destinationType;
@property (readonly, nonatomic) NSNumber *durationOfSession;
@property (readonly, nonatomic) NSNumber *durationToConnect;
@property (readonly, nonatomic) BOOL isNetworkEnabled;
@property (readonly, nonatomic) BOOL isNetworkActive;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiInterfaceDisallowed;
@property (readonly, nonatomic) BOOL isCellularInterfaceDisallowed;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 protocolVersionNumber:(id)a1 serviceName:(id)a2 clientType:(unsigned int)a3 isQREnabled:(BOOL)a4 isUsingQRDirectly:(BOOL)a5 isInitiator:(BOOL)a6 isScreenSharingSessionType:(BOOL)a7 isWithDefaultPairedDevice:(BOOL)a8 transportType:(unsigned int)a9 linkType:(unsigned int)a10 linkProtocol:(unsigned int)a11 endedReason:(unsigned int)a12 destinationType:(unsigned int)a13 durationOfSession:(id)a14 durationToConnect:(id)a15 isNetworkEnabled:(BOOL)a16 isNetworkActive:(BOOL)a17 isNetworkReachable:(BOOL)a18 isWifiInterfaceDisallowed:(BOOL)a19 isCellularInterfaceDisallowed:(BOOL)a20;

@end
