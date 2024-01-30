@class NSSet, NSDictionary;

@interface HFMutableStateDumpBuilderContext : HFStateDumpBuilderContext

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) unsigned long long outputStyle;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL excludePrimaryID;
@property (nonatomic) BOOL includeVolatileObjects;

@end
