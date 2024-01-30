@class NSString, NSNumber;

@interface ATXCoreAnalyticsModeDNDDimensions : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSNumber *isDND;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)powerset;
- (id)coreAnalyticsDictionary;
- (id)initWithMode:(id)a0 nullableIsDND:(id)a1;
- (id)initWithMode:(id)a0 isDND:(BOOL)a1;

@end
