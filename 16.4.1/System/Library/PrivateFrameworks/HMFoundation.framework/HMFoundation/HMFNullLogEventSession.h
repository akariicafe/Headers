@class NSUUID, NSString, HMFLogEventSessionVoucher;

@interface HMFNullLogEventSession : HMFObject <HMFLogEventSession>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
