@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying>

@property (retain, nonatomic) RTLearnedPlace *inferredVersion;
@property (retain, nonatomic) RTLearnedPlace *existingVersion;
@property (retain, nonatomic) RTLearnedPlace *truthfulCounterpart;
@property (nonatomic) BOOL isRotted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)trueVersion;

@end
