@class NSString, CADChangeTrackingClientId;

@interface EKChangeTrackingClientId : NSObject

@property (readonly, copy, nonatomic) NSString *suffix;
@property (readonly, copy, nonatomic) NSString *customClientId;
@property (readonly, nonatomic) CADChangeTrackingClientId *CADChangeTrackingClientId;

- (id)initWithCustomClientId:(id)a0;
- (id)initWithSuffix:(id)a0;
- (id)initWithCustomClientId:(id)a0 suffix:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
