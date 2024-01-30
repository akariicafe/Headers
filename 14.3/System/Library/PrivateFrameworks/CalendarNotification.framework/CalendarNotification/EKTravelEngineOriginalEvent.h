@class NSString, NSData, CLLocation, NSDate;

@interface EKTravelEngineOriginalEvent : NSObject

@property (retain, nonatomic) NSString *eventExternalURL;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int transportTypeOverride;
@property (retain, nonatomic) NSString *locationString;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *locationMapKitHandle;
@property (nonatomic) BOOL locationIsAConferenceRoom;
@property (nonatomic) BOOL automaticGeocodingAllowed;
@property (nonatomic) BOOL hasPredictedLocation;
@property (nonatomic) BOOL isOnSharedCalendar;
@property (retain, nonatomic) NSString *locationStringWithoutPrediction;

- (void).cxx_destruct;
- (BOOL)isEqualToOriginalEvent:(id)a0;
- (id)description;

@end
