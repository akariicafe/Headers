@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_transcriptions;
    NSArray *_rawTranscriptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) SFTranscription *rawTranscription;
@property (readonly, copy, nonatomic) NSArray *rawTranscriptions;
@property (readonly, copy, nonatomic) SFTranscription *bestTranscription;
@property (readonly, copy, nonatomic) NSArray *transcriptions;
@property (readonly, nonatomic, getter=isFinal) BOOL final;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithBestTranscription:(id)a0 rawTranscription:(id)a1 final:(BOOL)a2;
- (id)expandTranscription:(id)a0;
- (id)_initWithBestTranscription:(id)a0 final:(BOOL)a1;

@end
