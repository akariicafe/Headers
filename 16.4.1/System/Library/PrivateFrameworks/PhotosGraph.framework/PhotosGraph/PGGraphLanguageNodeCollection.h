@class NSSet;

@interface PGGraphLanguageNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSSet *locales;

+ (Class)nodeClass;
+ (id)nodesWithLocaleIdentifiers:(id)a0 inGraph:(id)a1;

@end
