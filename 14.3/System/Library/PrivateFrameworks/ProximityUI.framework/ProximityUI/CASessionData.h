@class NSDictionary, NSNumber;

@interface CASessionData : NSObject

@property (retain, nonatomic) NSDictionary *configureEvent;
@property (retain, nonatomic) NSDictionary *configureCompleteEvent;
@property (retain, nonatomic) NSDictionary *deinitEvent;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;

- (id)init;
- (void).cxx_destruct;
- (void)configure:(id)a0;
- (void)error:(id)a0;
- (void)deinit:(id)a0;
- (void)logData;
- (void)configureComplete:(id)a0;

@end
