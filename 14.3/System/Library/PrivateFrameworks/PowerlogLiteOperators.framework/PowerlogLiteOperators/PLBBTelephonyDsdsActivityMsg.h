@class NSNumber, NSString, NSDate;

@interface PLBBTelephonyDsdsActivityMsg : NSObject

@property (retain) NSDate *signalStrengthLogTimestamp;
@property (retain) NSNumber *signalBars;
@property (retain) NSString *campedRAT;
@property (retain) NSString *simStatus;
@property (retain) NSString *callStatus;
@property (retain) NSString *currentRAT;
@property (retain) NSString *preferredRAT;

- (id)init;
- (void).cxx_destruct;

@end
