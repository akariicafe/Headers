@class NSDate, RTLocation, RTPlaceInference;

@interface RTVisit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTPlaceInference *placeInference;
@property (readonly, nonatomic) long long dataPointCount;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSDate *entry;
@property (readonly, copy, nonatomic) NSDate *exit;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long source;

+ (BOOL)validVisitSources:(id)a0;
+ (long long)visitIncidentTypeFromString:(id)a0;
+ (id)stringFromVisitIncidentType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToVisit:(id)a0;
- (id)initWithDate:(id)a0 type:(long long)a1 location:(id)a2 entry:(id)a3 exit:(id)a4 dataPointCount:(long long)a5 confidence:(double)a6 placeInference:(id)a7;
- (id)initWithDate:(id)a0 type:(long long)a1 location:(id)a2 entry:(id)a3 exit:(id)a4 dataPointCount:(long long)a5 confidence:(double)a6 placeInference:(id)a7 source:(long long)a8;

@end
