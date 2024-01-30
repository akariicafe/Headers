@class NSString, _SYSharedServiceDB;

@interface _SYWeakServiceDBRef : NSObject

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) _SYSharedServiceDB *db;

- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;

@end
