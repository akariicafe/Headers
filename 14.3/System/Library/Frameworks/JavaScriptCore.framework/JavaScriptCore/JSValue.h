@class JSContext;

@interface JSValue : NSObject {
    struct OpaqueJSValue { } *m_value;
}

@property (readonly) JSContext *context;
@property (readonly) BOOL isUndefined;
@property (readonly) BOOL isNull;
@property (readonly) BOOL isBoolean;
@property (readonly) BOOL isNumber;
@property (readonly) BOOL isString;
@property (readonly) BOOL isObject;
@property (readonly) BOOL isArray;
@property (readonly) BOOL isDate;
@property (readonly) BOOL isSymbol;

+ (id)valueWithNewPromiseInContext:(id)a0 fromExecutor:(id /* block */)a1;
+ (id)valueWithNullInContext:(id)a0;
+ (SEL)selectorForValueToStruct:(const char *)a0;
+ (SEL)selectorForStructToValue:(const char *)a0;
+ (id)valueWithUInt32:(unsigned int)a0 inContext:(id)a1;
+ (id)valueWithNewErrorFromMessage:(id)a0 inContext:(id)a1;
+ (id)valueWithNewRegularExpressionFromPattern:(id)a0 flags:(id)a1 inContext:(id)a2;
+ (id)valueWithBool:(BOOL)a0 inContext:(id)a1;
+ (id)valueWithUndefinedInContext:(id)a0;
+ (id)valueWithNewPromiseResolvedWithResult:(id)a0 inContext:(id)a1;
+ (id)valueWithNewArrayInContext:(id)a0;
+ (id)valueWithNewPromiseRejectedWithReason:(id)a0 inContext:(id)a1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inContext:(id)a1;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0 inContext:(id)a1;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(id)a1;
+ (id)valueWithNewObjectInContext:(id)a0;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1;
+ (id)valueWithDouble:(double)a0 inContext:(id)a1;
+ (id)valueWithNewSymbolFromDescription:(id)a0 inContext:(id)a1;
+ (id)valueWithInt32:(int)a0 inContext:(id)a1;
+ (id)valueWithObject:(id)a0 inContext:(id)a1;

- (id)valueForProperty:(id)a0;
- (id)toDate;
- (id)toDictionary;
- (BOOL)isInstanceOf:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)callWithArguments:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })toPoint;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)toNumber;
- (BOOL)toBool;
- (double)toDouble;
- (BOOL)isEqualToObject:(id)a0;
- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })toRange;
- (unsigned int)toUInt32;
- (id)initWithValue:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
- (struct CGSize { double x0; double x1; })toSize;
- (id)constructWithArguments:(id)a0;
- (id)toObjectOfClass:(Class)a0;
- (id)toString;
- (id)description;
- (struct OpaqueJSValue { } *)JSValueRef;
- (BOOL)deleteProperty:(id)a0;
- (id)toObject;
- (BOOL)hasProperty:(id)a0;
- (void)defineProperty:(id)a0 descriptor:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (id)toArray;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toRect;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (id)invokeMethod:(id)a0 withArguments:(id)a1;
- (int)toInt32;
- (BOOL)isEqualWithTypeCoercionToObject:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;

@end
