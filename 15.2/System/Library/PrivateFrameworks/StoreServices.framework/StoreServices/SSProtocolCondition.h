@interface SSProtocolCondition : NSObject {
    long long _operator;
    id _value;
}

+ (id)newConditionWithDictionary:(id)a0;

- (BOOL)evaluateWithContext:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
