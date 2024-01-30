@class NSString, NSDate;

@interface CMHeartRateData : CMLogItem <SRSampling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double heartRate;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL error;
@property (readonly, nonatomic) long long dataSource;
@property (readonly, nonatomic) long long mode;

+ (BOOL)supportsSecureCoding;
+ (id)dataSourceName:(long long)a0;
+ (id)modeName:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithHeartRate:(double)a0 confidence:(double)a1 timestamp:(double)a2 startDate:(id)a3 error:(BOOL)a4 dataSource:(long long)a5 mode:(long long)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
