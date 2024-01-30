@class NSString;

@interface BMPBSiriExecutionEvent : PBCodable <NSCopying> {
    struct { unsigned char taskStep : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasTaskStep;
@property (nonatomic) int taskStep;
@property (readonly, nonatomic) BOOL hasStatusReason;
@property (retain, nonatomic) NSString *statusReason;
@property (readonly, nonatomic) BOOL hasSlotValue;
@property (retain, nonatomic) NSString *slotValue;
@property (readonly, nonatomic) BOOL hasIntentName;
@property (retain, nonatomic) NSString *intentName;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)taskStepAsString:(int)a0;
- (int)StringAsTaskStep:(id)a0;

@end
