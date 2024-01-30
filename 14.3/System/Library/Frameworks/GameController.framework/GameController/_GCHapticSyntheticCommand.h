@class _GCHapticParameterCurve, _GCHapticTokenAndParams;

@interface _GCHapticSyntheticCommand : NSObject {
    unsigned short _type;
    double _time;
    unsigned long long _channelOrSeqID;
    unsigned long long _identifier;
}

@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) double time;
@property (readonly, nonatomic) unsigned long long channelID;
@property (readonly, nonatomic) unsigned long long sequenceID;
@property (readonly, nonatomic) unsigned long long eventID;
@property (readonly, nonatomic) unsigned long long paramID;
@property (readonly, nonatomic) unsigned long long serverID;
@property (readonly, nonatomic) unsigned short command;
@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) _GCHapticParameterCurve *parameterCurve;
@property (readonly, nonatomic) _GCHapticTokenAndParams *tokenAndParams;

- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)preprocessCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; } *)a0;
- (id)initWithHapticCommand:(const struct HapticCommand { struct MessageHeader { unsigned short x0; unsigned short x1; } x0; unsigned int x1; double x2; unsigned long long x3; unsigned long long x4; union { struct TokenAndParams { unsigned long long x0; struct ItemList<FixedParam, 8> { unsigned int x0; struct FixedParam { unsigned int x0; float x1; } x1[8]; } x1; } x0; struct SequenceChannelParam { unsigned long long x0; unsigned long long x1; float x2; } x1; struct SequenceParam { unsigned short x0; float x1; } x2; float x3; double x4; struct ItemList<ParamPoint, 16> { unsigned int x0; struct ParamPoint { float x0; float x1; } x1[16]; } x5; } x5; } *)a0;

@end
