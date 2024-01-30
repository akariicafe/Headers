@class NSObject;
@protocol OS_nw_context;

@interface SiriCoreNWContext : NSObject {
    NSObject<OS_nw_context> *_context;
}

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (id)nwContext;

@end
