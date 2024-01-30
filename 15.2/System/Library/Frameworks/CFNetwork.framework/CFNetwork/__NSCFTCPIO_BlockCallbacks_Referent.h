@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {
    struct TCPIO_BlockCallbacks_Listener { void /* function */ **x0; struct CBs { id /* block */ x0; id /* block */ x1; id /* block */ x2; id /* block */ x3; id /* block */ x4; id /* block */ x5; } x1; id x2; int x3; } *_readListener;
    struct TCPIO_BlockCallbacks_Listener { void /* function */ **x0; struct CBs { id /* block */ x0; id /* block */ x1; id /* block */ x2; id /* block */ x3; id /* block */ x4; id /* block */ x5; } x1; id x2; int x3; } *_writeListener;
}

- (id)init;
- (void)dealloc;

@end
