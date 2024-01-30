@class NSDictionary;

@interface _EARAudioAnalytics : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *speechRecognitionFeatures;
@property (readonly, copy, nonatomic) NSDictionary *acousticFeatures;
@property (readonly, nonatomic) double snr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithSpeechRecognitionFeatures:(id)a0 acousticFeatures:(id)a1 snr:(double)a2;

@end
