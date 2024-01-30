@class NSArray, AIRecognizedText;

@interface AIAudiogramAxis : NSObject

@property (nonatomic) unsigned long long axis;
@property (retain, nonatomic) NSArray *values;
@property (readonly, nonatomic) AIRecognizedText *minValue;
@property (readonly, nonatomic) AIRecognizedText *maxValue;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAxis:(unsigned long long)a0 values:(id)a1;

@end
