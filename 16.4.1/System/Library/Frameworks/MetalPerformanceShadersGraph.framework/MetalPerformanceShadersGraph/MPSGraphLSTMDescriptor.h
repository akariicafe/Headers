@interface MPSGraphLSTMDescriptor : NSObject <NSCopying> {
    BOOL _hasMask;
    BOOL _hasInitState;
    BOOL _hasInitCell;
    BOOL _hasPeephole;
    BOOL _hasCellGradient;
}

@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL bidirectional;
@property (nonatomic) BOOL produceCell;
@property (nonatomic) BOOL training;
@property (nonatomic) BOOL forgetGateLast;
@property (nonatomic) unsigned long long inputGateActivation;
@property (nonatomic) unsigned long long forgetGateActivation;
@property (nonatomic) unsigned long long cellGateActivation;
@property (nonatomic) unsigned long long outputGateActivation;
@property (nonatomic) unsigned long long activation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
