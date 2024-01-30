@class NSMutableData;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

@interface CSKeywordAnalyzerNDEAPI : NSObject {
    void **_ndeObject;
    NSMutableData *_currentBlob;
}

@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;

- (id)processAudioChunk:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initWithBlob:(id)a0;
- (id)checkForTriggerWithBytes:(const short *)a0 withNumberOfSamples:(long long)a1;
- (id)processAudioBytes:(void *)a0 withNumberOfSamples:(long long)a1;

@end
