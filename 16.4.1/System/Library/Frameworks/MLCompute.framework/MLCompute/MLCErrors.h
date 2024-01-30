@interface MLCErrors : NSObject

+ (id)createErrorWithCode:(long long)a0 description:(id)a1;
+ (id)invalidInputErrorForMethod:(id)a0 description:(id)a1;
+ (id)invalidStateErrorForMethod:(id)a0 description:(id)a1;

@end
