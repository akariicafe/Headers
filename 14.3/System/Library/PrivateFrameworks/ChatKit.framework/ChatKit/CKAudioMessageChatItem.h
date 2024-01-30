@class CKAudioMediaObject;

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (readonly, nonatomic) CKAudioMediaObject *mediaObject;

- (Class)cellClass;
- (Class)balloonViewClass;
- (unsigned long long)balloonCorners;

@end
