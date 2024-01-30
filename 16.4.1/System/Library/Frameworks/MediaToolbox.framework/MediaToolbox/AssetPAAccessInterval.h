@class PAApplication, PAAccessLogger, PATCCAccess, PAAccessInterval;

@interface AssetPAAccessInterval : NSObject {
    PATCCAccess *_access;
    PAAccessLogger *_logger;
    PAAccessInterval *_accessInterval;
    PAApplication *_application;
}

- (void)dealloc;
- (id)initWithClientPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
