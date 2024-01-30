@class NSObject;
@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject {
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)nwContext;

@end
