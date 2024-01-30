@class NSDictionary;

@interface TPSContextualDuetEventBookmark : TPSContextualEventBookmark

@property (copy, nonatomic) NSDictionary *observationMap;

+ (BOOL)supportsSecureCoding;
+ (id)bookmarkWithObservationMap:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
