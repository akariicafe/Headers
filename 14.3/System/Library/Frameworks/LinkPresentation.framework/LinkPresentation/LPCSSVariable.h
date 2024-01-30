@class NSString;

@interface LPCSSVariable : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isImportant) BOOL important;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 important:(BOOL)a1;
- (id)variableByResolvingWithThemePath:(id)a0;
- (id)initWithName:(id)a0;

@end
