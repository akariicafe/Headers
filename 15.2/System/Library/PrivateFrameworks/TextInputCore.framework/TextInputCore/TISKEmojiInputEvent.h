@class NSString;

@interface TISKEmojiInputEvent : TISKTimestampEvent

@property (retain, nonatomic) NSString *emojiBucketCategory;

- (id)description;
- (void).cxx_destruct;
- (void)reportToSession:(id)a0;
- (id)init:(double)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 emojiBucketCategory:(id)a3;

@end
