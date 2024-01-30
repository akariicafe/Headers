@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {
    NSMutableDictionary *_commandToInvocationsMap;
    NSMutableArray *_retainedBlockHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (void)addHandlerToCommand:(id)a0 withTarget:(id)a1 action:(SEL)a2;
- (void)addHandlerToCommand:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)handlerExistsForCommand:(id)a0;
- (BOOL)executeWithArgumentCount:(int)a0 arguments:(const char **)a1;

@end
