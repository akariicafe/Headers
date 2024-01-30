@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (readonly, nonatomic) BOOL hasPreferredApplicationAID;
@property (retain, nonatomic) NSString *preferredApplicationAID;

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
