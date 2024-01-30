@class SASRequestOptions;

@interface AFUITestInput : NSObject

@property (readonly, nonatomic) SASRequestOptions *requestOptions;

+ (id)_baseRequestOptions;

- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)_initWithRequestOptions:(id)a0;
- (id)initWithRecordedSpeechURL:(id)a0;

@end
