@class NSArray, SAUITemplateEdgeInsets, NSString;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *communicationOptions;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseItem;
+ (id)baseItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
