@class SYLogEngineState, NSString, NSDictionary, SYLogSessionState, SYLogDeviceState, NSMutableArray;

@interface SYLogServiceState : PBCodable <NSCopying> {
    struct { unsigned char serviceType : 1; } _has;
}

@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasEngine;
@property (retain, nonatomic) SYLogEngineState *engine;
@property (readonly, nonatomic) BOOL hasSession;
@property (retain, nonatomic) SYLogSessionState *session;
@property (nonatomic) BOOL sessionQueueRunning;
@property (readonly, nonatomic) BOOL hasTargetedDevice;
@property (retain, nonatomic) SYLogDeviceState *targetedDevice;
@property (nonatomic) int enqueuedSyncType;
@property (retain, nonatomic) NSMutableArray *transportOptions;
@property (readonly, nonatomic) BOOL hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasPeerGenerationID;
@property (retain, nonatomic) NSString *peerGenerationID;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;

+ (Class)transportOptionsType;

- (id)serviceTypeAsString:(int)a0;
- (void)clearTransportOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsEnqueuedSyncType:(id)a0;
- (void)addTransportOptions:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)enqueuedSyncTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)transportOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)transportOptionsCount;

@end
