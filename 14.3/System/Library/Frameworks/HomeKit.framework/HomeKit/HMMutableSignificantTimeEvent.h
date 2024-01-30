@class NSString, NSDateComponents;

@interface HMMutableSignificantTimeEvent : HMSignificantTimeEvent

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;

@end
