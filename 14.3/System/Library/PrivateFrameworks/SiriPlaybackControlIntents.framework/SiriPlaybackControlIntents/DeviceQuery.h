@class NSString, NSArray;

@interface DeviceQuery : INObject

@property (nonatomic, readonly) NSString *description;
@property (copy, nonatomic) NSArray *accessoryNames;
@property (copy, nonatomic) NSArray *roomNames;
@property (copy, nonatomic) NSArray *zoneNames;
@property (copy, nonatomic) NSArray *placeHints;
@property (copy, nonatomic) NSString *deviceQuantifier;
@property (copy, nonatomic) NSArray *serviceNames;
@property (copy, nonatomic) NSArray *deviceTypes;
@property (copy, nonatomic) NSArray *deviceGroups;
@property (copy, nonatomic) NSArray *fromEntities;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSArray *toEntities;

@end
