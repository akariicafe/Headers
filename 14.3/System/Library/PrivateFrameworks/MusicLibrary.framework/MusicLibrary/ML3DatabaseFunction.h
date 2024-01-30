@class NSString;

@interface ML3DatabaseFunction : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int argumentCount;

- (void).cxx_destruct;
- (BOOL)registerWithConnection:(id)a0;
- (id)initWithName:(id)a0 argumentCount:(int)a1;

@end
