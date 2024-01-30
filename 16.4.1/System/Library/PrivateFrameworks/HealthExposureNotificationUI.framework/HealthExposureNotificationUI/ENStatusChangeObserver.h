@interface ENStatusChangeObserver : NSObject {
    void /* unknown type, empty encoding */ adapter;
    void /* unknown type, empty encoding */ didChangeHandler;
}

@property (nonatomic) void /* unknown type, empty encoding */ active;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0 didChangeHandler:(id /* block */)a1;

@end
