@class TISKTap;

@interface TISKEvent : NSObject <TISKEventProtocol>

@property (nonatomic) int type;
@property (retain, nonatomic) TISKTap *tap;
@property (nonatomic) BOOL emojiSearchMode;
@property (nonatomic) unsigned long long order;
@property (nonatomic) BOOL hasTimestamp;

- (id)privateDescription;
- (id)description;
- (void).cxx_destruct;
- (double)touchDownTimestamp;
- (id)init:(int)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2 tap:(id)a3;
- (BOOL)isMissingATouch;
- (id)downTouchEvent;
- (id)init:(int)a0 emojiSearchMode:(BOOL)a1 order:(long long)a2;
- (BOOL)isValidCandidate:(id)a0;
- (void)reportInterKeyTiming:(id)a0 previousEvent:(id)a1;
- (void)reportToSession:(id)a0;
- (double)touchUpTimestamp;
- (id)upTouchEvent;

@end
