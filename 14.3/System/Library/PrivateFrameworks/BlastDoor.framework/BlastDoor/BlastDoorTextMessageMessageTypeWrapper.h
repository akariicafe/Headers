@class BlastDoorTypingIndicator, NSString, BlastDoorSticker, BlastDoorBalloonPlugin, BlastDoorTapBack, BlastDoorAudioMessage, BlastDoorMessage;

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {
    void /* unknown type, empty encoding */ textMessage_MessageType;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorTypingIndicator *typingIndicator;
@property (nonatomic, readonly) BlastDoorMessage *textMessage;
@property (nonatomic, readonly) BlastDoorTapBack *tapback;
@property (nonatomic, readonly) BlastDoorBalloonPlugin *balloonPlugin;
@property (nonatomic, readonly) BlastDoorSticker *sticker;
@property (nonatomic, readonly) BlastDoorAudioMessage *audioMessage;

- (id)init;
- (void).cxx_destruct;

@end
