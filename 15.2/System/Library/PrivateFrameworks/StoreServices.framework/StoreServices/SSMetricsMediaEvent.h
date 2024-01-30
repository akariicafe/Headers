@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *locationDescription;
@property (retain, nonatomic) NSString *mediaEventType;
@property (retain, nonatomic) NSString *mediaURL;

- (id)init;
- (void)setLocationWithEventLocations:(id)a0;

@end
