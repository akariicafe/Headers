@class NSMutableSet;

@interface TMLJSScope : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableSet *vars;

- (void).cxx_destruct;
- (void)addVar:(id)a0;

@end
