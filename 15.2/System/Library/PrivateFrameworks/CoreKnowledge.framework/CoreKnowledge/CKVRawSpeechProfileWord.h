@class NSString;

@interface CKVRawSpeechProfileWord : NSObject

@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) long long tagType;
@property (readonly, nonatomic) NSString *tagValue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpeechWordDictionary:(id)a0;
- (id)_extractTagFromSpeechWord:(id)a0;
- (id)_extractOrthographyFromSpeechWord:(id)a0;

@end
