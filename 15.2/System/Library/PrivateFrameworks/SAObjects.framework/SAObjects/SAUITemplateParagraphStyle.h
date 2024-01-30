@class NSString, NSNumber;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSNumber *firstLineHeadIndent;
@property (copy, nonatomic) NSNumber *getParagraphSpacingBefore;
@property (copy, nonatomic) NSNumber *headIndent;
@property (copy, nonatomic) NSNumber *lineHeightMultiple;
@property (copy, nonatomic) NSNumber *lineSpacing;
@property (copy, nonatomic) NSNumber *maximumLineHeight;
@property (copy, nonatomic) NSNumber *minimumLineHeight;
@property (copy, nonatomic) NSNumber *paragraphSpacing;
@property (copy, nonatomic) NSNumber *tailIndent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paragraphStyle;
+ (id)paragraphStyleWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
