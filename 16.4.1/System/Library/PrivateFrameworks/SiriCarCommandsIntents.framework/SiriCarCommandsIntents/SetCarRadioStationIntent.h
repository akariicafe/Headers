@class NSNumber, NSString;

@interface SetCarRadioStationIntent : INIntent

@property (nonatomic, retain) NSNumber *channel;
@property (nonatomic, copy) NSString *callsign;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSNumber *frequency;
@property (nonatomic) long long band;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
