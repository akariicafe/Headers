@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : PBCodable {
    struct { unsigned char directAction : 1; } _has;
}

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) int directAction;
@property (nonatomic) BOOL hasDirectAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
