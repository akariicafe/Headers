@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCAdaptiveLearning : NSObject {
    NSMutableDictionary *_callHistory;
    BOOL _segmentChanged;
    int _shortTermHistoryLength;
    int _longTermHistoryLength;
    double _shortTermAdjustmentFactor;
    double _longTermAdjustmentFactor;
    double _shortTermValueWeight;
    double _longTermValueWeight;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (readonly) int adaptiveLearningState;

- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
- (int)longTermAverageSARBRForSegment:(id)a0;
- (int)shortTermAverageISBRForSegment:(id)a0;
- (int)getValueForSegment:(id)a0 withBlock:(id /* block */)a1;
- (int)longTermAverageBWEForSegment:(id)a0;
- (int)longTermAverageISBRForSegment:(id)a0;
- (int)longTermAverageSATXBRForSegment:(id)a0;
- (int)longTermAverageTBRForSegment:(id)a0;
- (int)previousISBRForSegment:(id)a0;
- (void)saveCallSegmentHistory;
- (int)shortTermAverageBWEForSegment:(id)a0;
- (int)shortTermAverageSARBRForSegment:(id)a0;
- (int)shortTermAverageSATXBRForSegment:(id)a0;
- (int)shortTermAverageTBRForSegment:(id)a0;
- (void)updateSegment:(id)a0 TBR:(int)a1 ISBTR:(int)a2 SATXBR:(int)a3 SARBR:(int)a4 BWE:(int)a5;

@end
