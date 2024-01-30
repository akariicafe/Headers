@class SASTComparisonEntity, SAUIDecoratedText, NSString;

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASTComparisonEntity *firstItem;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (retain, nonatomic) SASTComparisonEntity *secondItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)comparisonItem;
+ (id)comparisonItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
