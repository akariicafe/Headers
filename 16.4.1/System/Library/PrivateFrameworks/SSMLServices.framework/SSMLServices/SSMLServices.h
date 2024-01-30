@class SSMLServicesWrapper;

@interface SSMLServices : NSObject

@property (retain, nonatomic) SSMLServicesWrapper *conversionWrapper;

+ (id)shared;

- (void).cxx_destruct;
- (id)convertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSSML:(id)a1;
- (id)generateSSMLFromAVSpeechUtterance:(id)a0;
- (BOOL)isSSMLValid:(id)a0;
- (id)parseSSMLToPlainTalk:(id)a0;
- (id)generateSSMLFromPlainTalkString:(id)a0;
- (id)generateSSMLFromString:(id)a0;
- (id)parseSSMLToAVSpeechUtterances:(id)a0;
- (id)parseSSMLToPlainText:(id)a0;

@end
