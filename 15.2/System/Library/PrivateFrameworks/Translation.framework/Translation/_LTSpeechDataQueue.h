@class _LTSpeechDataQueueNode;

@interface _LTSpeechDataQueue : NSObject {
    unsigned long long _maxFrames;
    unsigned long long _currentFrames;
    _LTSpeechDataQueueNode *_head;
    _LTSpeechDataQueueNode *_tail;
}

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)a0;
- (id)initForSeconds:(double)a0;
- (void)consumeAll:(id /* block */)a0;

@end
