@class NSString;

@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char value : 1; unsigned char state : 1; unsigned char status : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned long long value;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) BOOL hasDetectedName;
@property (retain, nonatomic) NSString *detectedName;
@property (readonly, nonatomic) BOOL hasEffectiveName;
@property (retain, nonatomic) NSString *effectiveName;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsState:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)stateAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
