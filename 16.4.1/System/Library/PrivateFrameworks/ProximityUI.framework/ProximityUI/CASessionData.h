@class NSDictionary, NSNumber, NSUUID;

@interface CASessionData : NSObject

@property (retain, nonatomic) NSDictionary *configureEvent;
@property (retain, nonatomic) NSDictionary *configureCompleteEvent;
@property (retain, nonatomic) NSDictionary *deinitEvent;
@property (retain, nonatomic) NSNumber *numberOfErrorEvents;
@property (retain, nonatomic) NSUUID *productUUID;
@property (retain, nonatomic) NSNumber *isOwner;

- (void)error:(id)a0;
- (void)configure:(id)a0;
- (id)init;
- (void)logData;
- (void).cxx_destruct;
- (void)deinit:(id)a0;
- (void)configureComplete:(id)a0;

@end
