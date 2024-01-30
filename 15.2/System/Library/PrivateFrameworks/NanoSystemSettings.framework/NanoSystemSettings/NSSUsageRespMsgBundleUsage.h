@class NSString, NSMutableArray;

@interface NSSUsageRespMsgBundleUsage : PBCodable <NSCopying> {
    struct { unsigned char purgeable : 1; } _has;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSMutableArray *categories;
@property (nonatomic) BOOL hasPurgeable;
@property (nonatomic) BOOL purgeable;

+ (Class)categoriesType;

- (unsigned long long)categoriesCount;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)addCategories:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)clearCategories;
- (id)dictionaryRepresentation;

@end
