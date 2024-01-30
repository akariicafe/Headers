@class NSArray, NSDictionary, SCNProgram, NSMutableArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_c3dShaderModifierCache;
    NSMutableArray *_argumentsNames;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (retain, nonatomic) SCNProgram *program;
@property (readonly, nonatomic) id owner;
@property (readonly, nonatomic) NSArray *shaderModifiersArgumentsNames;

- (void)_commonInit;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithOwner:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct __C3DFXTechnique { } *)_technique;
- (const void *)__CFObject;
- (void)handleBindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (void)ownerWillDie;
- (void)copyModifiersFrom:(id)a0;
- (void)handleUnbindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (void)_stopObservingProgram;
- (void)_programDidChange:(id)a0;
- (void)_setC3DProgram;
- (void)_startObservingProgram;
- (void)_parseAndSetShaderModifier:(id)a0;
- (void)_updateC3DProgramInputForSymbol:(id)a0;
- (struct __C3DFXGLSLProgram { } *)_programFromPassAtIndex:(long long)a0;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram { } *)a0 forSymbol:(id)a1;
- (void)_updateAllC3DProgramInputs;
- (void)_setC3DProgramDelegate;
- (void)_customEncodingOfSCNShadableHelper:(id)a0;
- (void)_customDecodingOfSCNShadableHelper:(id)a0;
- (void)_didDecodeSCNShadableHelper:(id)a0;
- (BOOL)_bindValueForSymbol:(id)a0 atLocation:(unsigned int)a1 programID:(unsigned int)a2 node:(id)a3 renderer:(id)a4;
- (void)_unbindValueForSymbol:(id)a0 atLocation:(unsigned int)a1 programID:(unsigned int)a2 node:(id)a3 renderer:(id)a4;

@end
