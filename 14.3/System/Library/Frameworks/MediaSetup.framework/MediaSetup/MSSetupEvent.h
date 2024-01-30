@class NSString, NSDate;

@interface MSSetupEvent : NSObject

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) int result;
@property (retain, nonatomic) NSString *serviceId;
@property (nonatomic) int numberOfErrors;
@property (nonatomic) int numberOfHomesWithVR;
@property (nonatomic) int numberOfHomeAdded;
@property (nonatomic) BOOL sent;

- (id)init;
- (void).cxx_destruct;
- (id)resultAsString;
- (void)addHome:(id)a0;

@end
