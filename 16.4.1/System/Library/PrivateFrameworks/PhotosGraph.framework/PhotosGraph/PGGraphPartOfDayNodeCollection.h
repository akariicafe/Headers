@class NSArray;

@interface PGGraphPartOfDayNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSArray *partsOfDay;

+ (Class)nodeClass;
+ (id)partOfDayNodeForPartOfDay:(unsigned long long)a0 inGraph:(id)a1;

@end
