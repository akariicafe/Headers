@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (id)typeName;
- (id)valueForName:(id)a0;
- (void).cxx_destruct;
- (id)nameForValue:(int)a0;
- (id)initWithTypeName:(id)a0 pairs:(struct TCDumpEnumPair { int x0; id x1; } *)a1;

@end
