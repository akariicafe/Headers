@class NSString, BlastDoorMetadata;

@interface BlastDoorPlayedReceipt : NSObject {
    void /* unknown type, empty encoding */ playedReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
