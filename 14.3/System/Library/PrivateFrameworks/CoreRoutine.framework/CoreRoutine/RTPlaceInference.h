@class NSString, RTLocation, RTMapItem, NSUUID;

@interface RTPlaceInference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) RTMapItem *mapItem;
@property (readonly, nonatomic) unsigned long long userType;
@property (readonly, nonatomic) unsigned long long userTypeSource;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSUUID *loiIdentifier;

+ (id)placeTypeToString:(unsigned long long)a0;
+ (id)userSpecificPlaceTypeSourceToString:(unsigned long long)a0;
+ (id)userSpecificPlaceTypeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)nameFromUserType:(unsigned long long)a0;
- (id)initWithMapItem:(id)a0 userType:(unsigned long long)a1 userTypeSource:(unsigned long long)a2 placeType:(unsigned long long)a3 referenceLocation:(id)a4 confidence:(double)a5 loiIdentifier:(id)a6;
- (void)encodeWithCoder:(id)a0;

@end
