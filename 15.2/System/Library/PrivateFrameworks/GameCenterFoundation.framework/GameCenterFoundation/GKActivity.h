@class NSString, NSObject;
@protocol OS_os_activity;

@interface GKActivity : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) NSObject<OS_os_activity> *parent;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;

+ (id)named:(id)a0;
+ (void)execute:(id /* block */)a0;
+ (id)detached;
+ (id)activity;
+ (id)currentOrNew;
+ (void)named:(id)a0 execute:(id /* block */)a1;

- (id)named:(id)a0;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 parent:(id)a1 mode:(unsigned int)a2;
- (void)createActivity;
- (id)child;
- (void)named:(id)a0 execute:(id /* block */)a1;

@end
