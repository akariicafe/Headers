@class NSString, NSArray, TIKeyboardCandidate, TIMecabraSegment, NSMutableArray;

@interface TILiveConversionSegments : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned int inputIndex;
@property (copy, nonatomic) NSString *rawInputString;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) NSString *autoCommitString;
@property (copy, nonatomic) NSArray *segmentRanges;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (retain, nonatomic) TIMecabraSegment *currentSegment;
@property (retain, nonatomic) NSMutableArray *rawSegments;

- (void)clear;
- (void)commit;
- (void)move:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (BOOL)didAccept;
- (void)buildMarkedText;
- (id)initWithSegments:(id)a0 at:(unsigned long long)a1;
- (BOOL)canMove:(BOOL)a0;
- (void)didUpdateCandidate:(id)a0 with:(id)a1;

@end
