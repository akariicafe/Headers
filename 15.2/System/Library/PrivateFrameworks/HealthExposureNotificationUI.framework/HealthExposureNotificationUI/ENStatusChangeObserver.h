@interface ENStatusChangeObserver : NSObject {
    void /* unknown type, empty encoding */ adapter;
    void /* unknown type, empty encoding */ didChangeHandler;
}

@property (nonatomic) void /* unknown type, empty encoding */ active;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithAdapter:(id)a0 didChangeHandler:(id /* block */)a1;

@end
