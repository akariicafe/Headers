@class AIAudiogramAxis;

@interface AIAudiogramMap : NSObject

@property (retain, nonatomic) AIAudiogramAxis *frequencies;
@property (retain, nonatomic) AIAudiogramAxis *hearingLevels;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFrequencies:(id)a0 hearingLevels:(id)a1;
- (id)frequencyAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hearingLevelAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_valueOfPoint:(struct CGPoint { double x0; double x1; })a0 betweenObject:(id)a1 andObject:(id)a2 onAxis:(unsigned long long)a3;

@end
