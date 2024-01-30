@class NSString, NSArray, DeviceContext, NSNumber;

@interface Device : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSArray *zoneNames;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *routeId;
@property (nonatomic, retain) NSNumber *currentHome;
@property (nonatomic, retain) NSNumber *currentRoom;
@property (nonatomic, retain) NSNumber *numberOfAffectedRooms;
@property (nonatomic, retain) NSNumber *isDeviceSelectedUsingContext;
@property (nonatomic, retain) DeviceContext *context;
@property (nonatomic, retain) NSNumber *disambiguated;
@property (nonatomic, retain) NSNumber *confirmed;
@property (nonatomic, retain) NSNumber *skipConfirmation;
@property (nonatomic, copy) NSString *mediaSystemId;
@property (nonatomic, retain) NSNumber *isEndpoint;
@property (nonatomic, copy) NSString *displayableName;
@property (nonatomic, retain) NSNumber *isPreResolved;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
