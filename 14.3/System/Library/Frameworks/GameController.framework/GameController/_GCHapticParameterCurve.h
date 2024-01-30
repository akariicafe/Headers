@class NSMutableArray;

@interface _GCHapticParameterCurve : NSObject

@property (retain, nonatomic) NSMutableArray *curve;

- (void).cxx_destruct;
- (id)initWithHapticCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; } *)a0;

@end
