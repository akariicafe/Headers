@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *currentConfigurations;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;

+ (id)options;
+ (Class)currentConfigurationType;

- (void)addCurrentConfiguration:(id)a0;
- (void)clearCurrentConfigurations;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)currentConfigurationsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)currentConfigurationAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
