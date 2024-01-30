@class RTLearnedPlace;

@interface RTLearnedPlaceVersions : NSObject <NSCopying>

@property (retain, nonatomic) RTLearnedPlace *inferredVersion;
@property (retain, nonatomic) RTLearnedPlace *existingVersion;
@property (retain, nonatomic) RTLearnedPlace *truthfulCounterpart;
@property (nonatomic) BOOL isRotted;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)trueVersion;

@end
