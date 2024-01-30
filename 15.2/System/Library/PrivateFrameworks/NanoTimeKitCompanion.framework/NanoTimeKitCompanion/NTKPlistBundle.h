@class NSString, NSBundle;

@interface NTKPlistBundle : NSObject

@property (retain, nonatomic) NSString *plistFileName;
@property (retain, nonatomic) NSBundle *bundle;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPlist:(id)a0 bundle:(id)a1;

@end
