@class NSString;

@interface TIContextValueDescriptor : TIMetricDescriptor

@property (retain) NSString *contextFieldName;

+ (id)contextValueDescriptorWithMetricName:(id)a0 contextFieldName:(id)a1;

- (void).cxx_destruct;
- (id)initWithMetricName:(id)a0 contextFieldName:(id)a1;

@end
