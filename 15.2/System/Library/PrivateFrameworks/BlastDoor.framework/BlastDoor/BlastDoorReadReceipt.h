@class NSString, BlastDoorMetadata;

@interface BlastDoorReadReceipt : NSObject {
    void /* unknown type, empty encoding */ readReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
