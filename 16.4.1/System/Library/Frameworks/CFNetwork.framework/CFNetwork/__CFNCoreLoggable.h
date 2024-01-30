@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq> {
    struct CoreLoggable { void /* function */ **x0; } *_loggable;
}

- (void)dealloc;
- (id)initWithLoggableName:(const char *)a0;
- (const struct CoreLoggable { void /* function */ **x0; } *)loggable;

@end
