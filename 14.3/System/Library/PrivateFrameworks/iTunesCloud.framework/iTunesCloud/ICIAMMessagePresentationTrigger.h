@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {
    struct { unsigned char kind : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTriggerName;
@property (retain, nonatomic) NSString *triggerName;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)kindAsString:(int)a0;
- (int)StringAsKind:(id)a0;

@end
