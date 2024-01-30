@class NSString;
@protocol HMBQueryableModelFieldCoder;

@interface HMBModelQueryArgument : HMFObject

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) id<HMBQueryableModelFieldCoder> defaultValue;

+ (id)argumentWithPropertyName:(id)a0;
+ (id)argumentWithPropertyName:(id)a0 defaultValue:(id)a1;

- (void).cxx_destruct;
- (id)initWithPropertyName:(id)a0 defaultValue:(id)a1;

@end
