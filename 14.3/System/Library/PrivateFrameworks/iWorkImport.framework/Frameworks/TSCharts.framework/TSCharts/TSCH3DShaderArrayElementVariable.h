@class TSCH3DShaderVariable;

@interface TSCH3DShaderArrayElementVariable : TSCH3DShaderVariable <TSCHUnretainedParent> {
    TSCH3DShaderVariable *mParent;
    unsigned long long mIndex;
}

+ (id)variableWithParentVariable:(id)a0 index:(unsigned long long)a1;

- (void)dealloc;
- (void)clearParent;
- (id)initWithParentVariable:(id)a0 index:(unsigned long long)a1;

@end
