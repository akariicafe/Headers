@class NSNumber, NSDate;

@interface CDDMForecast : NSManagedObject

@property (retain, nonatomic) NSNumber *attributeId;
@property (retain, nonatomic) NSNumber *basisCount;
@property (retain, nonatomic) NSNumber *basisFilled;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSNumber *forecastFormat;
@property (retain, nonatomic) NSDate *forecastGeneratedOn;
@property (retain, nonatomic) NSNumber *forecastGranularity;
@property (retain, nonatomic) NSNumber *forecastGroupId;
@property (retain, nonatomic) NSNumber *forecastType;
@property (retain, nonatomic) NSDate *historyWindowEnd;
@property (retain, nonatomic) NSNumber *historyWindowRecurrenceDelta;
@property (retain, nonatomic) NSNumber *historyWindowRecurrenceWidth;
@property (retain, nonatomic) NSDate *historyWindowStart;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *limitCount;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *oldestEntryDate;

@end
