@class CKAudioMediaObject;

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (readonly, nonatomic) CKAudioMediaObject *mediaObject;

- (Class)cellClass;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;

@end
