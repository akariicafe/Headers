@class TSCH3DShaderVariable;

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable {
    TSCH3DShaderVariable *_parent;
    unsigned long long _index;
}

+ (id)variableWithParentVariable:(id)a0 index:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithParentVariable:(id)a0 index:(unsigned long long)a1;

@end
