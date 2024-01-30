@interface TSKLegacyCustomFormat : TSKFormat

@property (readonly, nonatomic) unsigned int legacyID;

- (id)asLegacyCustomFormat;
- (id)initWithFormatType:(unsigned int)a0 legacyID:(unsigned int)a1;

@end
