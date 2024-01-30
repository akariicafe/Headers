@class NSUUID, NSString, CARPFLogEventSessionVoucher;
@protocol CARPFLogBackendSession;

@interface CARPFLogEventSession : NSObject <CARPFLogging>

@property (readonly, nonatomic) id<CARPFLogBackendSession> backend;
@property (readonly, nonatomic) CARPFLogEventSessionVoucher *voucher;
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
