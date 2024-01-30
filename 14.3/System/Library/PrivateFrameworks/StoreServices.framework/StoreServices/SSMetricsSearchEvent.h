@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) id actionDetails;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (retain, nonatomic) NSString *targetType;
@property (retain, nonatomic) NSString *targetURL;

- (id)init;
- (void)setLocationWithEventLocations:(id)a0;

@end
