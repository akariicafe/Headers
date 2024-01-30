@class NSString, BlastDoorMetadata;

@interface BlastDoorDeliveryReceipt : NSObject {
    void /* unknown type, empty encoding */ deliveryReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
