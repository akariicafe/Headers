@class NSString, NSArray;

@interface HLPHelpTopicItem : HLPHelpItem

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *hrefID;
@property (copy, nonatomic) NSString *glossaryIdentifierString;
@property (copy, nonatomic) NSArray *categories;
@property (readonly, nonatomic, getter=isPassionPoints) BOOL passionPoints;
@property (readonly, nonatomic, getter=isGlossary) BOOL glossary;
@property (readonly, nonatomic, getter=isCopyright) BOOL copyright;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 helpBookURL:(id)a1 serverType:(long long)a2;
- (BOOL)categoryContainKey:(id)a0;

@end
