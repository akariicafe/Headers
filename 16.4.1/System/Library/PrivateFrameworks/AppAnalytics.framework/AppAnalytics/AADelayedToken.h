@interface AADelayedToken : NSObject {
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ sealed;
}

- (void)commit;
- (id)init;
- (void).cxx_destruct;

@end
