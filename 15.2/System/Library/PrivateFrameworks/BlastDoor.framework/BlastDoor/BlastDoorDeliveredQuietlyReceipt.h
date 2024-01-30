@class NSString, BlastDoorMetadata;

@interface BlastDoorDeliveredQuietlyReceipt : NSObject {
    void /* unknown type, empty encoding */ deliveredQuietlyReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
