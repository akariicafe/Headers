@class NSString;

@interface LPCSSVariable : NSObject

@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)variableByResolvingWithThemePath:(id)a0;

@end
