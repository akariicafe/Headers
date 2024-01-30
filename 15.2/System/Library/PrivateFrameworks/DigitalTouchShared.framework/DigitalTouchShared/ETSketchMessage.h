@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage {
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
}

@property (nonatomic) BOOL hasMultipleColors;
@property (readonly, nonatomic) unsigned long long numberOfColors;
@property (nonatomic) BOOL didEndWisping;
@property (nonatomic) BOOL didDrawPoints;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSArray *colorsInMessage;
@property (nonatomic) BOOL hideComet;

+ (unsigned short)messageType;

- (id)archiveData;
- (void).cxx_destruct;
- (id)init;
- (void)didEndWisp;
- (void)addStrokeWithColor:(id)a0;
- (void)willBeginWisp;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)didReachRendererLimit;
- (id)initWithArchiveData:(id)a0;
- (BOOL)_decodeWithDoodle:(id)a0;
- (void)setParentMessage:(id)a0;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (id)messageTypeAsString;
- (void)convertToSimulatedPlaybackSpeed;
- (double)messageDuration;

@end
