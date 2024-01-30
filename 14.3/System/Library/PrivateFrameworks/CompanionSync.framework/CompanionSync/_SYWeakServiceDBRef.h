@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) _SYSharedServiceDB *db;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;

@end
