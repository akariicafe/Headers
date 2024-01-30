@class NSString, NSArray, BlastDoorBalloonPluginPayloadWrapper;

@interface BlastDoorCombinedPluginAttachment : NSObject {
    void /* unknown type, empty encoding */ combinedPluginAttachment;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;

- (void).cxx_destruct;
- (id)init;

@end
