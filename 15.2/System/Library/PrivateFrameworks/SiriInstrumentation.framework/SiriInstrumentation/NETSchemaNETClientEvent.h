@class NETSchemaNETClientEventMetadata, NETSchemaNETPeerConnectionFailed, NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured, NSData, NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETDebugSessionConnectionSnapshotCaptured, NETSchemaNETSessionConnectionFailed, NETSchemaNETSessionConnectionHttpHeaderCreated, NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured, NETSchemaNETSessionConnectionSnapshotCaptured, NETSchemaNETNetworkConnectionStateReadySnapshotCaptured;

@interface NETSchemaNETClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) NETSchemaNETClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) NETSchemaNETSessionConnectionHttpHeaderCreated *sessionConnectionHttpHeaderCreated;
@property (nonatomic) BOOL hasSessionConnectionHttpHeaderCreated;
@property (retain, nonatomic) NETSchemaNETSessionConnectionSnapshotCaptured *sessionConnectionSnapshotCaptured;
@property (nonatomic) BOOL hasSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionSnapshotCaptured *debugSessionConnectionSnapshotCaptured;
@property (nonatomic) BOOL hasDebugSessionConnectionSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETSessionConnectionFailed *sessionConnectionFailed;
@property (nonatomic) BOOL hasSessionConnectionFailed;
@property (retain, nonatomic) NETSchemaNETPeerConnectionFailed *peerConnectionFailed;
@property (nonatomic) BOOL hasPeerConnectionFailed;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured *networkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) BOOL hasNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStatePreparationSnapshotCaptured *debugNetworkConnectionStatePreparationSnapshotCaptured;
@property (nonatomic) BOOL hasDebugNetworkConnectionStatePreparationSnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETNetworkConnectionStateReadySnapshotCaptured *networkConnectionStateReadySnapshotCaptured;
@property (nonatomic) BOOL hasNetworkConnectionStateReadySnapshotCaptured;
@property (retain, nonatomic) NETSchemaNETDebugNetworkConnectionStateReadySnapshotCaptured *debugNetworkConnectionStateReadySnapshotCaptured;
@property (nonatomic) BOOL hasDebugNetworkConnectionStateReadySnapshotCaptured;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
