@class NSString, NSObject;

@interface TIFieldDescriptor : NSObject

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) NSString *fieldDescription;
@property (readonly, nonatomic) NSString *metricName;
@property (readonly, nonatomic) NSString *metricType;
@property (readonly, nonatomic) NSObject *inactiveValue;

+ (id)fieldDescriptorWithFieldName:(id)a0 fieldDescription:(id)a1 metricName:(id)a2 metricType:(id)a3 inactiveValue:(id)a4;

- (void).cxx_destruct;
- (id)initWithFieldName:(id)a0 fieldDescription:(id)a1 metricName:(id)a2 metricType:(id)a3 inactiveValue:(id)a4;

@end
