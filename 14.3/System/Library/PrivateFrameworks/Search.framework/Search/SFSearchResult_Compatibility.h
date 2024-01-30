@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *compatibilityTitle;

- (void)setUniqueIdentifier:(id)a0;
- (id)simpleTitle;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForKeyedArchiver;
- (id)copy;
- (void)writeTo:(id)a0;
- (id)uniqueIdentifier;
- (id)debugDescription;
- (BOOL)isQuickGlance;
- (Class)classForCoder;
- (void)setSimpleTitle:(id)a0;
- (id)section_header;

@end
