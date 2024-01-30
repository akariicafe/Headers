@class NSString;

@interface _AFInterstitialAction : NSObject

@property (readonly, nonatomic) long long phase;
@property (readonly, copy, nonatomic) NSString *displayKey;
@property (readonly, copy, nonatomic) NSString *speakableKey;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithDuration:(double)a0;
- (id)initWithPhase:(long long)a0 displayKey:(id)a1 speakableKey:(id)a2;

@end
