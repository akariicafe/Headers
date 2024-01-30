@class NSString, BlastDoorMetadata;

@interface BlastDoorMarkUnreadRequest : NSObject {
    void /* unknown type, empty encoding */ markUnreadRequest;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
