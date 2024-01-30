@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {
    struct { unsigned char resultType : 1; } _has;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) BOOL hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) BOOL hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
