@class NSArray;

@interface VSValueType : NSObject

@property (retain, nonatomic) Class implementationClass;
@property (copy, nonatomic) NSArray *properties;

- (void).cxx_destruct;
- (BOOL)isSuperclassAlsoValueType;

@end
