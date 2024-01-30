@class NSDate;

@interface PGGraphAddressEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) unsigned long long numberOfAssets;

+ (Class)edgeClass;

@end
