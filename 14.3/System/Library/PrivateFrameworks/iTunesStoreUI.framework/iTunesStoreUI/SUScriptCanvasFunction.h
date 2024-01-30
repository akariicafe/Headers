@class SUScriptCanvasResult;

@interface SUScriptCanvasFunction : SUScriptFunction {
    SUScriptCanvasResult *_lastResult;
}

- (void)dealloc;
- (id)copyResultForSize:(struct CGSize { double x0; double x1; })a0;

@end
