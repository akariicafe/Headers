@interface WFActivityProgressController : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ alertController;
}

- (id)initWithTitle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentFrom:(id)a0 cancellationHandler:(id /* block */)a1;

@end
