@class NSString;

@interface ML3DatabaseFunction : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int argumentCount;

- (BOOL)registerWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 argumentCount:(int)a1;

@end
