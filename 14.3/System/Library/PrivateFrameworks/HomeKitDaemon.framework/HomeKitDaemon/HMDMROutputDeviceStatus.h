@class NSString, HMDMRAVEndpoint, NSError;

@interface HMDMROutputDeviceStatus : NSObject

@property (readonly, nonatomic) HMDMRAVEndpoint *outputEndpoint;
@property (readonly, nonatomic) NSString *outputUID;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOutputUID:(id)a0 error:(id)a1;
- (id)initWithOutputEndpoint:(id)a0 error:(id)a1;
- (id)initWithOutputUID:(id)a0;
- (id)initWithOutputEndpoint:(id)a0;

@end
