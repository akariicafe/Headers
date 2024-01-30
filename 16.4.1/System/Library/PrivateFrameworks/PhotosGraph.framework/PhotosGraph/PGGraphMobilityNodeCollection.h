@class NSArray;

@interface PGGraphMobilityNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) NSArray *locationMobilityTypes;

+ (Class)nodeClass;

@end
