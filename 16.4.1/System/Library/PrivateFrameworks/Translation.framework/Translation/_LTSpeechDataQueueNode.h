@class NSData;

@interface _LTSpeechDataQueueNode : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) _LTSpeechDataQueueNode *next;

- (void).cxx_destruct;

@end
