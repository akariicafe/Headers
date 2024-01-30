@class NSString, NSArray;
@protocol NSObject;

@interface PLPropertyValidationRule : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id<NSObject> expectedValue;
@property (retain, nonatomic) id<NSObject> expectedValueRangeLow;
@property (retain, nonatomic) id<NSObject> expectedValueRangeHigh;
@property (retain, nonatomic) NSArray *expectedValues;

- (id)keyPaths;
- (void).cxx_destruct;
- (id)predicate;
- (id)currentValuesOfObject:(id)a0;
- (id)descriptionOfCurrentValuesOfObject:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 outMessage:(id *)a1;
- (id)reverseRule;

@end
