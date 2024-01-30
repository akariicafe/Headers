@class NSString, NSMutableDictionary;

@interface TSCH3DUniformArrayShaderVariables : NSObject {
    NSString *_prefix;
    NSMutableDictionary *_variables;
}

@property (readonly, nonatomic) unsigned long long arraySize;

+ (id)variablesWithPrefix:(id)a0 arraySize:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)addArrayName:(id)a0 type:(id)a1;
- (void)addUniformsToShaderProgram:(id)a0 size:(unsigned long long)a1;
- (id)initWithPrefix:(id)a0 arraySize:(unsigned long long)a1;
- (id)p_formatVariableName:(id)a0;
- (void)setVariable:(id)a0 forName:(id)a1;
- (id)variableAtIndex:(unsigned long long)a0 name:(id)a1;
- (id)variableForName:(id)a0;

@end
