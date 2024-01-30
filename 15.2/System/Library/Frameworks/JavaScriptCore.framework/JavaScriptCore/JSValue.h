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

+ (id)valueWithNewObjectInContext:(id)a0;
+ (id)valueWithNewPromiseRejectedWithReason:(id)a0 inContext:(id)a1;
+ (id)valueWithNullInContext:(id)a0;
+ (SEL)selectorForValueToStruct:(const char *)a0;
+ (id)valueWithNewPromiseInContext:(id)a0 fromExecutor:(id /* block */)a1;
+ (id)valueWithBool:(BOOL)a0 inContext:(id)a1;
+ (SEL)selectorForStructToValue:(const char *)a0;
+ (id)valueWithNewArrayInContext:(id)a0;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
+ (id)valueWithDouble:(double)a0 inContext:(id)a1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inContext:(id)a1;
+ (id)valueWithInt32:(int)a0 inContext:(id)a1;
+ (id)valueWithSize:(struct CGSize { double x0; double x1; })a0 inContext:(id)a1;
+ (id)valueWithObject:(id)a0 inContext:(id)a1;
+ (id)valueWithNewErrorFromMessage:(id)a0 inContext:(id)a1;
+ (id)valueWithNewRegularExpressionFromPattern:(id)a0 flags:(id)a1 inContext:(id)a2;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1;
+ (id)valueWithUInt32:(unsigned int)a0 inContext:(id)a1;
+ (id)valueWithNewPromiseResolvedWithResult:(id)a0 inContext:(id)a1;
+ (id)valueWithUndefinedInContext:(id)a0;
+ (id)valueWithPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(id)a1;
+ (id)valueWithNewSymbolFromDescription:(id)a0 inContext:(id)a1;

- (id)toDate;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (id)toDictionary;
- (BOOL)isInstanceOf:(id)a0;
- (struct CGPoint { double x0; double x1; })toPoint;
- (id)toArray;
- (BOOL)hasProperty:(id)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)toObject;
- (id)toNumber;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })toRange;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)toObjectOfClass:(Class)a0;
- (id)toString;
- (unsigned int)toUInt32;
- (id)initWithValue:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
- (struct CGSize { double x0; double x1; })toSize;
- (id)callWithArguments:(id)a0;
- (id)description;
- (double)toDouble;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)constructWithArguments:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)init;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (int)toInt32;
- (BOOL)toBool;
- (BOOL)isEqualWithTypeCoercionToObject:(id)a0;
- (void)defineProperty:(id)a0 descriptor:(id)a1;
- (struct OpaqueJSValue { } *)JSValueRef;
- (void)dealloc;
- (BOOL)deleteProperty:(id)a0;
- (BOOL)isEqualToObject:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })toRect;
- (id)objectForKeyedSubscript:(id)a0;
- (id)invokeMethod:(id)a0 withArguments:(id)a1;

@end
