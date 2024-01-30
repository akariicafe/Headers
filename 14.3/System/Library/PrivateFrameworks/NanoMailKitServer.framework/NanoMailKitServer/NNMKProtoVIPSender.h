@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *emailAddresses;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)addEmailAddresses:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (unsigned long long)emailAddressesCount;
- (void)clearEmailAddresses;
- (id)vipSender;

@end
