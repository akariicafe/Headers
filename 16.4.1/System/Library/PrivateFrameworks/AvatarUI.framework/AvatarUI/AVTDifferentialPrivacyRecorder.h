@class NSMutableDictionary;

@interface AVTDifferentialPrivacyRecorder : NSObject <AVTDifferentialPrivacyRecorder>

@property (readonly, copy, nonatomic) id /* block */ stringRecorderProvider;
@property (readonly, copy, nonatomic) id /* block */ numRecorderProvider;
@property (readonly, nonatomic) NSMutableDictionary *stringRecorders;
@property (readonly, nonatomic) NSMutableDictionary *numRecorders;

+ (id /* block */)makeCachingNumRecorderProvider:(id /* block */)a0;
+ (id /* block */)makeCachingStringRecorderProvider:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStringRecorderProvider:(id /* block */)a0 numericDataRecorderProvider:(id /* block */)a1;
- (void)recordNumber:(id)a0 forKey:(id)a1;
- (void)recordString:(id)a0 forKey:(id)a1;

@end
