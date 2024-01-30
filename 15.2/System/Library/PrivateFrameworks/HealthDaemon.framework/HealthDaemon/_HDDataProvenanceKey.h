@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying> {
    unsigned long long _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
