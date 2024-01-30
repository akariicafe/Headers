@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {
    struct { unsigned char sessionState : 1; unsigned char assert : 1; } _has;
}

@property (nonatomic) BOOL hasAssert;
@property (nonatomic) BOOL assert;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSData *sessionIdentifier;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) unsigned int sessionState;

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
