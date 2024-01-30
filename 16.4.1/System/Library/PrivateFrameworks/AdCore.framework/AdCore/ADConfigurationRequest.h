@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *currentConfigurations;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;

+ (id)options;
+ (Class)currentConfigurationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addCurrentConfiguration:(id)a0;
- (void)clearCurrentConfigurations;
- (id)currentConfigurationAtIndex:(unsigned long long)a0;
- (unsigned long long)currentConfigurationsCount;

@end
