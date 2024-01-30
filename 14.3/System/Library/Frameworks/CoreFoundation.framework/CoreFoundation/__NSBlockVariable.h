@interface __NSBlockVariable : NSObject {
    struct Block_byref { void *x0; struct Block_byref *x1; int x2; unsigned int x3; } *forwarding;
    int flags;
    int size;
    void /* function */ *byref_keep;
    void /* function */ *byref_destroy;
    id containedObject;
}

@end
