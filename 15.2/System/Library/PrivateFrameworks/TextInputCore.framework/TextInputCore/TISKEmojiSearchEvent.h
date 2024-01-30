@interface TISKEmojiSearchEvent : TISKTimestampEvent

@property (nonatomic) BOOL engaged;

- (id)description;
- (void)reportToSession:(id)a0;
- (id)init:(double)a0 engaged:(BOOL)a1 order:(long long)a2;

@end
