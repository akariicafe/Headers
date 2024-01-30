@class NSString;

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _index;
    BOOL _required;
}

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)index;
- (void)dealloc;
- (id)description;
- (unsigned long long)type;
- (id)name;
- (BOOL)required;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 index:(unsigned long long)a2 required:(BOOL)a3;

@end
