@class SXJSONArray;
@protocol SXContentDisplay;

@interface SXContainerComponent : SXComponent

@property (readonly, nonatomic) SXJSONArray *allComponents;
@property (readonly, nonatomic) SXJSONArray *components;
@property (readonly, nonatomic) id<SXContentDisplay> contentDisplay;
@property (readonly, nonatomic) BOOL allowAutoplacedAds;

+ (id)typeString;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)a0;

- (BOOL)requiresLinkedContent;
- (BOOL)allowAutoplacedAdsWithValue:(id)a0 withType:(int)a1;

@end
