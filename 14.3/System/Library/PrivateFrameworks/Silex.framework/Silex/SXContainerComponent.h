@class SXJSONArray;
@protocol SXContentDisplay;

@interface SXContainerComponent : SXComponent

@property (readonly, nonatomic) SXJSONArray *allComponents;
@property (readonly, nonatomic) SXJSONArray *components;
@property (readonly, nonatomic) id<SXContentDisplay> contentDisplay;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;
+ (id)typeString;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)a0;

@end
