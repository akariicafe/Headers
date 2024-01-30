@interface TISKEmojiSearchEvent : TISKTimestampEvent

@property (nonatomic) BOOL engaged;

- (id)description;
- (id)init:(double)a0 engaged:(BOOL)a1 order:(long long)a2;
- (void)reportToSession:(id)a0;

@end
