@class AKAnisetteData;

@interface TRFetchAnisetteDataResponse : TRResponseMessage

@property (copy, nonatomic) AKAnisetteData *anisetteData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
