@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) HDDataOriginProvenance *dataProvenance;
@property (readonly, copy, nonatomic) NSString *localProductType;
@property (readonly, copy, nonatomic) NSString *localSystemBuild;

+ (id)provenanceKeyForProvenance:(id)a0 localProductType:(id)a1 localSystemBuild:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
