@interface MPSGraphGRUDescriptor : NSObject <NSCopying> {
    BOOL _hasMask;
    BOOL _hasInitState;
    BOOL _hasBias2;
}

@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL bidirectional;
@property (nonatomic) BOOL training;
@property (nonatomic) BOOL resetGateFirst;
@property (nonatomic) BOOL resetAfter;
@property (nonatomic) BOOL flipZ;
@property (nonatomic) unsigned long long updateGateActivation;
@property (nonatomic) unsigned long long resetGateActivation;
@property (nonatomic) unsigned long long outputGateActivation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
