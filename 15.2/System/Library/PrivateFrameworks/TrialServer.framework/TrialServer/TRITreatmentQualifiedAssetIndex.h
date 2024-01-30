@class NSString;

@interface TRITreatmentQualifiedAssetIndex : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) unsigned int index;

+ (id)indexWithTreatmentId:(id)a0 index:(unsigned int)a1;

- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTreatmentId:(id)a0 index:(unsigned int)a1;
- (BOOL)isEqualToIndex:(id)a0;
- (id)copyWithReplacementIndex:(unsigned int)a0;

@end
