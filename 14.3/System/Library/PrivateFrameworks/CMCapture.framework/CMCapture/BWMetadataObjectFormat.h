@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)a0;

- (unsigned int)mediaType;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithMetadataIdentifiers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
