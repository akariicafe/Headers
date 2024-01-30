@class NSString, NSNumber, NSError;

@interface HAPMetricsPairVerifyEvent : HMMLogEvent

@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSNumber *linkType;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSError *pvError;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 forLinkType:(id)a1 duration:(id)a2 reason:(id)a3 pvError:(id)a4;

@end
