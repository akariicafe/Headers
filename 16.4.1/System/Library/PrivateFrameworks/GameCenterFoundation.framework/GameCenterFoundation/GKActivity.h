@class NSString, NSObject;
@protocol OS_os_activity;

@interface GKActivity : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) NSObject<OS_os_activity> *parent;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;

+ (id)activity;
+ (void)named:(id)a0 execute:(id /* block */)a1;
+ (void)execute:(id /* block */)a0;
+ (id)named:(id)a0;
+ (id)detached;
+ (id)currentOrNew;

- (id)initWithName:(id)a0 parent:(id)a1 mode:(unsigned int)a2;
- (id)child;
- (void)createActivity;
- (void)named:(id)a0 execute:(id /* block */)a1;
- (void)execute:(id /* block */)a0;
- (id)named:(id)a0;
- (void).cxx_destruct;

@end
