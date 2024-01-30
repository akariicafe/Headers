@class IKDataBindingPropertyPath, NSString;

@interface _IKDOMConditionalOperation : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IKDataBindingPropertyPath *propertyPath;
@property (copy, nonatomic) NSString *literal;

- (void).cxx_destruct;
- (BOOL)passesForDataItem:(id)a0;

@end
