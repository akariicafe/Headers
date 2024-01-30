@class TISKTap;

@interface TISKEvent : NSObject <TISKEventProtocol>

@property (nonatomic) int type;
@property (retain, nonatomic) TISKTap *tap;
@property (nonatomic) BOOL emojiSearchMode;
@property (nonatomic) unsigned long long order;
@property (nonatomic) BOOL hasTimestamp;

- (void).cxx_destruct;
- (id)description;
- (double)touchDownTimestamp;
- (id)upTouchEvent;
- (id)downTouchEvent;
- (double)touchUpTimestamp;
- (void)reportToSession:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (id)init:(int)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (id)init:(int)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 tap:(id)a3;
- (BOOL)isMissingATouch;
- (BOOL)isValidCandidate:(id)a0;

@end
