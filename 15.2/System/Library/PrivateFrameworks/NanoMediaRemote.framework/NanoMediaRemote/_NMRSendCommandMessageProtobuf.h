@class NSString, _NMRCommandOptionsProtobuf;

@interface _NMRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char command : 1; unsigned char originIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) _NMRCommandOptionsProtobuf *options;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)commandAsString:(int)a0;
- (int)StringAsCommand:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
