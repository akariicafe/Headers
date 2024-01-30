@class NSString, NSUUID, CLPlacemark, CLLocation;

@interface _CLPlaceInference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long userType;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) CLPlacemark *placemark;
@property (readonly, nonatomic) CLLocation *referenceLocation;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSUUID *_loiIdentifier;

+ (unsigned long long)_placeInferencePlaceTypeFromRTPlaceType:(unsigned long long)a0;
+ (unsigned long long)_userSpecificPlaceTypeFromRTUserType:(unsigned long long)a0;

- (id)initWithUserType:(unsigned long long)a0 placeType:(unsigned long long)a1 placemark:(id)a2 referenceLocation:(id)a3 confidence:(double)a4 preferredName:(id)a5 loiIdentifier:(id)a6;
- (id)_initWithRTPlaceInference:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
