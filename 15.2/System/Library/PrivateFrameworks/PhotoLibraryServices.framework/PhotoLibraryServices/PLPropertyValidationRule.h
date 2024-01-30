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
- (BOOL)evaluateWithObject:(id)a0 outMessage:(id *)a1;
- (id)descriptionOfCurrentValuesOfObject:(id)a0;
- (id)currentValuesOfObject:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (id)reverseRule;

@end
