@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq> {
    struct CoreLoggable { void /* function */ **x0; } *_loggable;
}

- (const struct CoreLoggable { void /* function */ **x0; } *)loggable;
- (id)initWithLoggableName:(const char *)a0;
- (void)dealloc;

@end
