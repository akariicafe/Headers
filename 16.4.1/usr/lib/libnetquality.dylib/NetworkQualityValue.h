@class NSNumber;

@interface NetworkQualityValue : NSObject

@property (retain) NSNumber *value;
@property (retain) NSNumber *rating;
@property long long confidence;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)updateConfidence:(long long)a0;

@end
