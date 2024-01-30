@class NSString, NSArray, DeviceContext, NSNumber;

@interface Device : INObject

@property (nonatomic, readonly) NSString *description;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSArray *zoneNames;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *routeId;
@property (copy, nonatomic) NSNumber *currentHome;
@property (copy, nonatomic) NSNumber *currentRoom;
@property (copy, nonatomic) NSNumber *numberOfAffectedRooms;
@property (copy, nonatomic) NSNumber *isDeviceSelectedUsingContext;
@property (copy, nonatomic) DeviceContext *context;
@property (copy, nonatomic) NSNumber *disambiguated;
@property (copy, nonatomic) NSNumber *confirmed;
@property (copy, nonatomic) NSNumber *skipConfirmation;

@end
