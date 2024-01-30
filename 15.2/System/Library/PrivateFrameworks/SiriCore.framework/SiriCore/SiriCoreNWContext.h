@class NSObject;
@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject {
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)nwContext;

@end
