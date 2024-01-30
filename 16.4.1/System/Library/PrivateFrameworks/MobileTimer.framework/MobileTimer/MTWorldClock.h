@class NSString, NSDateComponents, NSNumber;

@interface MTWorldClock : INObject

@property (copy, nonatomic) NSString *timeZoneName;
@property (copy, nonatomic) NSDateComponents *currentDate;
@property (copy, nonatomic) NSDateComponents *currentTime;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *timeZoneDisplayName;
@property (copy, nonatomic) NSString *timeZoneAbbreviation;
@property (copy, nonatomic) NSNumber *timeZoneOffset;
@property (copy, nonatomic) NSNumber *timeZoneOffsetFromGMT;
@property (copy, nonatomic) NSNumber *isDaylightSavingTime;

@end
