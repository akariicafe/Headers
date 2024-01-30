@class NSMutableDictionary;

@interface OCXSTValidator : NSObject {
    NSMutableDictionary *_simpleTypeMap;
}

+ (id)validator;
+ (BOOL)isValidValue:(id)a0 simpleType:(unsigned long long)a1;
+ (id)simpleType:(unsigned long long)a0 integerValue:(long long)a1;
+ (id)simpleType:(unsigned long long)a0 stringValue:(id)a1;
+ (id)validateIntegerValue:(long long)a0 minValue:(long long)a1 maxValue:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)simpleTypeMap;

@end
