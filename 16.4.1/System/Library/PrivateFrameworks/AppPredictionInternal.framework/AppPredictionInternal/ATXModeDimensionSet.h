@class NSString;

@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(id)a0;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)powerset;

@end
