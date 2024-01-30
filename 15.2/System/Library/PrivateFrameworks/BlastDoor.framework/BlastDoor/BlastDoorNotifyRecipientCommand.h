@class NSString, BlastDoorMetadata;

@interface BlastDoorNotifyRecipientCommand : NSObject {
    void /* unknown type, empty encoding */ notifyRecipientCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)init;

@end
