@class NSString;

@interface WFPBRemoteExecutionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasDestinationType;
@property (retain, nonatomic) NSString *destinationType;
@property (readonly, nonatomic) BOOL hasConnectionType;
@property (retain, nonatomic) NSString *connectionType;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;

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

@end
