@class NSString;

@interface RLMPropertyDescriptor : NSObject

@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic) NSString *propertyName;

+ (id)descriptorWithClass:(Class)a0 propertyName:(id)a1;

- (void).cxx_destruct;

@end
