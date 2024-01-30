@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {
    NSArray *_builtInArguments;
    NSArray *_arguments;
    NSArray *_bindings;
    NSData *_pluginReturnData;
    unsigned long long _primitiveKind;
    NSArray *_tags;
}

- (id)pluginReturnData;
- (id)arguments;
- (id)tags;
- (id)bindings;
- (unsigned long long)primitiveKind;
- (void)dealloc;
- (id)initWithDevice:(id)a0 reflectionData:(id)a1 functionType:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)initWithArguments:(id *)a0 argumentCount:(unsigned int)a1 builtInArgumentCount:(unsigned int)a2 pluginReturnData:(id)a3 primitiveKind:(unsigned long long)a4 tags:(id *)a5 tagCount:(unsigned int)a6;
- (id)builtInArguments;

@end
