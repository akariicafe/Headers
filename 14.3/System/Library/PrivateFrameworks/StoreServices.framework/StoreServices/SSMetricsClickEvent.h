@class NSString, NSNumber;

@interface SSMetricsClickEvent : SSMetricsBaseEvent

@property (retain, nonatomic) id actionDetails;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) id impressions;
@property (retain, nonatomic) NSString *locationDescription;
@property (retain, nonatomic) NSNumber *positionX;
@property (retain, nonatomic) NSNumber *positionY;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (retain, nonatomic) NSString *targetType;
@property (retain, nonatomic) NSString *targetURL;

- (id)init;
- (id)description;
- (void)setLocationWithEventLocations:(id)a0;

@end
