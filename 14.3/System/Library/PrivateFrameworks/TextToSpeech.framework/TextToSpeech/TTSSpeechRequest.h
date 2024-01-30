@class NSMutableArray, NSString, NSArray, NSURL, TTSSpeechChannel, NSAttributedString;
@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding> {
    id<TTSSpeechRequestDelegate> _delegate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTSSpeechChannel *speechChannel;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) long long gender;
@property (copy, nonatomic) NSURL *outputPath;
@property (nonatomic) double rate;
@property (nonatomic) double pitch;
@property (nonatomic) double volume;
@property (nonatomic) BOOL maintainsInput;
@property (nonatomic) BOOL supportsAccurateWordCallbacks;
@property (nonatomic) BOOL audioSessionIDIsValid;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) double latency;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double handledTime;
@property (nonatomic) BOOL useMonarchStyleRate;
@property (retain, nonatomic) NSArray *channels;
@property (nonatomic) unsigned long long synthesizerInstanceID;
@property (nonatomic) void *clientContext;
@property (copy, nonatomic) id /* block */ audioBufferCallback;
@property (retain, nonatomic) NSString *originalString;
@property (retain, nonatomic) NSMutableArray *originalWordRanges;
@property (retain, nonatomic) NSMutableArray *processedWordRanges;
@property (retain, nonatomic) NSMutableArray *replacedWords;
@property (nonatomic) long long wordRangeCallbacksDispatched;
@property (nonatomic) BOOL synthesizeSilently;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (long long)vocalizerFootprint;
- (long long)vocalizerGender;
- (id)initWithSpeechChannel:(id)a0;
- (void)speechRequestDidStartForService:(id)a0;
- (void)speechRequestDidPauseForService:(id)a0;
- (void)speechRequestDidContinueForService:(id)a0;
- (void)speechRequestMark:(long long)a0 didStartForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forService:(id)a2;
- (void)speechRequestDidStopWithSuccess:(BOOL)a0 phonemesSpoken:(id)a1 forService:(id)a2 error:(id)a3;
- (void)speechRequestDidSynthesizeSilentlyToURL:(id)a0 forService:(id)a1;

@end
