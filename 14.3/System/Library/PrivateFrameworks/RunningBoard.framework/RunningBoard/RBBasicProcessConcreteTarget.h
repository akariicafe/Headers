@class RBProcess;

@interface RBBasicProcessConcreteTarget : RBConcreteTarget {
    RBProcess *_process;
}

- (id)identity;
- (void).cxx_destruct;
- (BOOL)isSystem;
- (id)process;
- (id)_initWithProcess:(id)a0;
- (id)createRBSTarget;
- (id)description;

@end
