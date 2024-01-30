@class SXComponentClassification, NSString, SXComponentAnimation, SXJSONDictionary, SXJSONArray, SXComponentConditions, SXFormattedText;
@protocol SXComponentAnchor;

@interface SXQuickLookComponent : SXComponent <SXQuickLookComponent>

@property (readonly, nonatomic) SXFormattedText *caption;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) SXComponentConditions *conditions;
@property (readonly, nonatomic) unsigned long long contentRelevance;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, nonatomic) SXComponentClassification *classification;
@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) BOOL requiresLinkedContent;
@property (readonly, nonatomic) NSString *layout;
@property (readonly, nonatomic) NSString *style;
@property (readonly, nonatomic) id<SXComponentAnchor> anchor;
@property (readonly, nonatomic) SXJSONArray *behaviors;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SXJSONArray *conditional;

+ (id)typeString;

- (id)captionWithValue:(id)a0 withType:(int)a1;

@end
