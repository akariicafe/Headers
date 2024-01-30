@class NSString, FLOWSchemaFLOWStateReason, NSData;

@interface FLOWSchemaFLOWState : SISchemaInstrumentationMessage {
    struct { unsigned char flowStateType : 1; } _has;
}

@property (copy, nonatomic) NSString *currentTaskName;
@property (nonatomic) BOOL hasCurrentTaskName;
@property (copy, nonatomic) NSString *currentTaskType;
@property (nonatomic) BOOL hasCurrentTaskType;
@property (nonatomic) int flowStateType;
@property (nonatomic) BOOL hasFlowStateType;
@property (retain, nonatomic) FLOWSchemaFLOWStateReason *flowStateReason;
@property (nonatomic) BOOL hasFlowStateReason;
@property (copy, nonatomic) NSString *resolvedSlotName;
@property (nonatomic) BOOL hasResolvedSlotName;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
