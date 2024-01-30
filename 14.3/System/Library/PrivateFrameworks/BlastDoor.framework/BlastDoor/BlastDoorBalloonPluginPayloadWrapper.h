@class NSString, NSData, BlastDoorCombinedPluginAttachmentInfo, BlastDoorMessagesAppBalloon;

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {
    void /* unknown type, empty encoding */ balloonPlugin_Payload;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorMessagesAppBalloon *messagesAppBalloon;
@property (nonatomic, readonly) NSData *linkPresentation;
@property (nonatomic, readonly) BlastDoorCombinedPluginAttachmentInfo *combinedPluginAttachmentInfo;
@property (nonatomic, readonly) NSData *unknown_payload;

- (id)init;
- (void).cxx_destruct;

@end
