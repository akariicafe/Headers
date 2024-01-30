@class HMFLogEventSessionVoucher, NSUUID, NSString;
@protocol HMFLogBackendSession;

@interface HMFLogEventSession : NSObject <HMFLogging>

@property (readonly, nonatomic) id<HMFLogBackendSession> backend;
@property (readonly, nonatomic) HMFLogEventSessionVoucher *voucher;
@property (readonly, nonatomic) unsigned long long signpostId;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *rootUUID;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
