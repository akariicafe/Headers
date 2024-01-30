@class NSMutableDictionary;

@interface OCXSTValidator : NSObject {
    NSMutableDictionary *_simpleTypeMap;
}

+ (id)validator;
+ (id)validateIntegerValue:(long long)a0 minValue:(long long)a1 maxValue:(long long)a2;
+ (BOOL)isValidValue:(id)a0 simpleType:(unsigned long long)a1;
+ (id)simpleType:(unsigned long long)a0 integerValue:(long long)a1;
+ (id)simpleType:(unsigned long long)a0 stringValue:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)simpleTypeMap;

@end
