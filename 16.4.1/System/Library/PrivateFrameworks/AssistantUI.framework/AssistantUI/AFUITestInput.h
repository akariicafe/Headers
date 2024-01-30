@class SASRequestOptions;

@interface AFUITestInput : NSObject

@property (readonly, nonatomic) SASRequestOptions *requestOptions;

+ (id)_baseRequestOptions;

- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRequestOptions:(id)a0;
- (id)initWithRecordedSpeechURL:(id)a0;

@end
