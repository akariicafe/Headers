@class NSString, BlastDoorMetadata;

@interface BlastDoorDeliveryReceipt : NSObject {
    void /* unknown type, empty encoding */ deliveryReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
