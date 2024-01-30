@class SSMLParserWrapperInternal, SSMLRangeConverterInternal;

@interface SSMLServicesWrapper : NSObject

@property (readonly) SSMLParserWrapperInternal *underlyingObject;
@property (retain, nonatomic) SSMLRangeConverterInternal *converter;

- (id)init;
- (void).cxx_destruct;
- (id)convertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSSML:(id)a1;
- (id)generateSSMLFromAVSpeechUtterance:(id)a0;
- (id)parseSSMLToPlainTalk:(id)a0;
- (id)generateSSMLFromPlainTalkString:(id)a0;
- (id)generateSSMLFromString:(id)a0;
- (id)parseSSMLToAVSpeechUtterances:(id)a0;
- (id)parseSSMLToPlainText:(id)a0;

@end
