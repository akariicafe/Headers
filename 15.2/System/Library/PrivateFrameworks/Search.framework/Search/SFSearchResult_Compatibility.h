@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras

@property (retain, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *compatibilityTitle;

- (void)setUniqueIdentifier:(id)a0;
- (id)uniqueIdentifier;
- (BOOL)isQuickGlance;
- (Class)classForCoder;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)debugDescription;
- (Class)classForKeyedArchiver;
- (void)setSimpleTitle:(id)a0;
- (id)simpleTitle;
- (id)section_header;

@end
