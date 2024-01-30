@class CKAudioMediaObject;

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (readonly, nonatomic) CKAudioMediaObject *mediaObject;

- (Class)balloonViewClass;
- (unsigned long long)balloonCorners;
- (Class)cellClass;

@end
