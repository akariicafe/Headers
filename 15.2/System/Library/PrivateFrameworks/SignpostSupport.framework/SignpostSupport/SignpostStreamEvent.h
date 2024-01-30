@class NSObject;
@protocol OS_dispatch_source;

@interface SignpostStreamEvent : SignpostEvent

@property (nonatomic) unsigned long long _totalFrameCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) unsigned long long serialNumber;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)initWithDictionary:(id)a0;
- (BOOL)_hasTotalFrames;

@end
