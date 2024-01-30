@interface MPSGraphSingleGateRNNDescriptor : NSObject <NSCopying> {
    BOOL _hasMask;
    BOOL _hasInitState;
}

@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL bidirectional;
@property (nonatomic) BOOL training;
@property (nonatomic) unsigned long long activation;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
