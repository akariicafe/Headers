@class NSArray;

@interface PARFlightResponse : PARResponse

@property (retain, nonatomic) NSArray *flightResults;

+ (id)responseFromReply:(id)a0;
+ (id)_debugResponseFromReply:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
