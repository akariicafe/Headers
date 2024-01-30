@interface VUIAppStyleFactory : NSObject {
    long long _interfaceIdiom;
}

+ (id)sharedInstance;

- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cornerRadiusWithStyle:(long long)a0;
- (void)setAppStylesForElement:(id)a0;

@end
