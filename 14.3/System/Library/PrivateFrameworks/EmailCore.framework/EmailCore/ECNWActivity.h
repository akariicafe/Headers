@class NSObject;
@protocol OS_nw_connection, OS_nw_activity;

@interface ECNWActivity : NSObject {
    NSObject<OS_nw_activity> *_activity;
    NSObject<OS_nw_connection> *_currentConnection;
}

+ (void)attachCurrentActivityToConnection:(id)a0;
+ (void)detachCurrentActivityFromConnection:(id)a0;

- (void).cxx_destruct;
- (void)startActivity;
- (id)initWithDomain:(unsigned int)a0 type:(unsigned int)a1;
- (void)stopActivityWithSuccess:(BOOL)a0;

@end
