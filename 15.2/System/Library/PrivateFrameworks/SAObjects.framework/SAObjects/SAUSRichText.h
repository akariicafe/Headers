@class NSString, NSArray, NSNumber;

@interface SAUSRichText : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contentAdvisory;
@property (copy, nonatomic) NSString *formattedTextDelimiter;
@property (copy, nonatomic) NSArray *markupList;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSNumber *starRating;
@property (copy, nonatomic) NSNumber *textMaxlines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)richText;
+ (id)richTextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
