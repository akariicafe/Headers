@class NSString;

@interface NSSUsageRespMsgAppUsage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (nonatomic) unsigned long long staticSizeInBytes;
@property (nonatomic) unsigned long long dynamicSizeInBytes;
@property (nonatomic) unsigned long long sharedSizeInBytes;

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
