@class INSpeakableString;

@interface WFINSpeakableStringContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) INSpeakableString *speakableString;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;

- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
