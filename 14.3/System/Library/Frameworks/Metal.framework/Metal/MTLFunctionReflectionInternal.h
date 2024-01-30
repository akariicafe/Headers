@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {
    NSArray *_builtInArguments;
    NSArray *_arguments;
    NSData *_pluginReturnData;
}

- (id)initWithArguments:(id *)a0 argumentCount:(unsigned int)a1 builtInArgumentCount:(unsigned int)a2 pluginReturnData:(id)a3;
- (id)builtInArguments;
- (void)dealloc;
- (id)arguments;
- (id)initWithDevice:(id)a0 reflectionData:(id)a1 functionType:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)pluginReturnData;

@end
