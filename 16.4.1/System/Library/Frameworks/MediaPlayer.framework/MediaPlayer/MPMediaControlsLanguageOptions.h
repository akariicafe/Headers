@class NSString;

@interface MPMediaControlsLanguageOptions : NSObject {
    NSString *_routeUID;
    struct CGPoint { double x; double y; } _center;
}

- (void).cxx_destruct;
- (void)presentWithCompletion:(id /* block */)a0;
- (id)initWithRouteUID:(id)a0 atCenter:(struct CGPoint { double x0; double x1; })a1;

@end
