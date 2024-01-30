@class NSArray;

@interface VSValueType : NSObject

@property (retain, nonatomic) Class implementationClass;
@property (copy, nonatomic) NSArray *properties;

- (BOOL)isSuperclassAlsoValueType;
- (void).cxx_destruct;

@end
