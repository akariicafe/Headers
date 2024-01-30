@class NSArray, NSString;

@interface VNSmartCamObservation : VNObservation

@property (copy, nonatomic) NSArray *smartCamprints;
@property (readonly, copy, nonatomic) NSString *smartCamprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)smartCamprintCurrentVersion;
+ (id)observationWithSmartCamprints:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 smartCamprints:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
