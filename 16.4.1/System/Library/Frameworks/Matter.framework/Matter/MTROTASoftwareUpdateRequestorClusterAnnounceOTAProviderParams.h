@class NSNumber, NSData;

@interface MTROTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *providerNodeId;
@property (copy, nonatomic) NSNumber *vendorId;
@property (copy, nonatomic) NSNumber *providerNodeID;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSNumber *announcementReason;
@property (copy, nonatomic) NSData *metadataForNode;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
