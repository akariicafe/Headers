@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {
    NSArray *_metadataIdentifiers;
}

+ (void)initialize;
+ (id)formatWithMetadataIdentifiers:(id)a0;

- (unsigned int)mediaType;
- (id)_initWithMetadataIdentifiers:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)debugDescription;

@end
