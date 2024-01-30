@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject

@property (nonatomic) char propertyType;
@property (retain, nonatomic) NSSet *propertyClasses;
@property (nonatomic) SEL propertyGetter;
@property (nonatomic) SEL propertySetter;
@property (nonatomic) void /* function */ *propertyGetterIMP;
@property (nonatomic) void /* function */ *propertySetterIMP;
@property (nonatomic) struct objc_ivar { } *ivar;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;
@property (copy, nonatomic) NSString *structName;

- (void).cxx_destruct;
- (void *)ivarAddrForObject:(id)a0;
- (id)ivarValueForObject:(id)a0;
- (void)setIvarValue:(id)a0 forObject:(id)a1;

@end
