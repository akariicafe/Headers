@class NSString, NSUUID;

@interface MSVFrameworkDescription : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isDebug) BOOL debug;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 uuid:(id)a1 root:(BOOL)a2 debug:(BOOL)a3;

@end
