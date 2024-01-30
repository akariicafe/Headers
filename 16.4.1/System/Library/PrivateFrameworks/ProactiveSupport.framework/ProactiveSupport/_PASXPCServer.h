@class NSArray;

@interface _PASXPCServer : NSObject {
    NSArray *_XPCListeners;
}

+ (id)description;
+ (void)registerForService:(id)a0 delegate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCListeners:(id)a0 logHandle:(id)a1;
- (void)registerXPCListeners;

@end
