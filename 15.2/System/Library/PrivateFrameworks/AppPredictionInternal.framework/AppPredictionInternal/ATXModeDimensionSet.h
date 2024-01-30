@class NSString;

@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;

- (id)initWithMode:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)powerset;
- (id)coreAnalyticsDictionary;

@end
