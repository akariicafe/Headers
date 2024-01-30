@class NSString, BlastDoorMetadata;

@interface BlastDoorRetractMessageReceipt : NSObject {
    void /* unknown type, empty encoding */ retractMessageReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
