@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverterPool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pool;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)defaultConverter;
- (id)converterForAudioStreamId:(unsigned long long)a0;
- (id)_getAudioTimeConverterWithAudioStreamId:(unsigned long long)a0;

@end
