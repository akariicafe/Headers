@class NSArray, RTLocation;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *startLocation;
@property (readonly, nonatomic) RTLocation *endLocation;
@property (readonly, nonatomic) NSArray *expectedVisits;

+ (id)visitsDescriptionDataAtPath:(id)a0;
+ (id)getVisitsFromVisitsDescriptionData:(id)a0;

- (id)initWithStartLocation:(id)a0 endLocation:(id)a1 expectedVisits:(id)a2;
- (id)initWithVisitsDescriptionPListPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
