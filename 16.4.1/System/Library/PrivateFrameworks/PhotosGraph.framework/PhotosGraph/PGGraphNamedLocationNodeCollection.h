@class NSArray;

@interface PGGraphNamedLocationNodeCollection : PGGraphLocationNodeCollection

@property (readonly, nonatomic) NSArray *names;

+ (Class)nodeClass;
+ (id)locationNodeWithName:(id)a0 inGraph:(id)a1;

@end
