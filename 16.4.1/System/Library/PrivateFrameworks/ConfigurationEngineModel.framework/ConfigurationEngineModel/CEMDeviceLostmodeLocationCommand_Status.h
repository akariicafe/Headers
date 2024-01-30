@class NSSet, NSNumber, NSString;

@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSNumber *statusLatitude;
@property (copy, nonatomic) NSNumber *statusLongitude;
@property (copy, nonatomic) NSNumber *statusHorizontalAccuracy;
@property (copy, nonatomic) NSNumber *statusVerticalAccuracy;
@property (copy, nonatomic) NSNumber *statusAltitude;
@property (copy, nonatomic) NSNumber *statusSpeed;
@property (copy, nonatomic) NSNumber *statusCourse;
@property (copy, nonatomic) NSString *statusTimestamp;

+ (id)buildRequiredOnlyWithLatitude:(id)a0 withLongitude:(id)a1 withHorizontalAccuracy:(id)a2 withVerticalAccuracy:(id)a3 withAltitude:(id)a4 withSpeed:(id)a5 withCourse:(id)a6 withTimestamp:(id)a7;
+ (id)buildWithLatitude:(id)a0 withLongitude:(id)a1 withHorizontalAccuracy:(id)a2 withVerticalAccuracy:(id)a3 withAltitude:(id)a4 withSpeed:(id)a5 withCourse:(id)a6 withTimestamp:(id)a7;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
