@class NSString, NSUUID;

@interface UMTask : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) int pid;
@property (nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSUUID *uuid;

+ (id)taskWithName:(id)a0 reason:(id)a1;
+ (id)taskWithName:(id)a0 reason:(id)a1 forBundleID:(id)a2;

- (void)begin;
- (void)end;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
