@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (id)typeName;
- (void).cxx_destruct;
- (id)valueForName:(id)a0;
- (id)nameForValue:(int)a0;
- (id)initWithTypeName:(id)a0 pairs:(struct TCDumpEnumPair { int x0; id x1; } *)a1;

@end
