@class NSString;

@interface LPCSSVariable : NSObject

@property (readonly, copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)variableByResolvingWithThemePath:(id)a0;

@end
