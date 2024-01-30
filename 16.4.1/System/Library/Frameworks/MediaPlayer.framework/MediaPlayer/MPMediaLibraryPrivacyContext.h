@class PAAccessInterval, PAApplication;

@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication *_clientApplication;
    PAAccessInterval *_privacyAccessInterval;
}

+ (void)initialize;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)sharedContextForCurrentProcess;
+ (id)contextForDefaultClient;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)beginAccessInterval;
- (id)initWithPAApplication:(id)a0;
- (id)initWithClientIdentity:(id)a0;
- (void)logPrivacyAccess;
- (id)init;
- (void).cxx_destruct;
- (void)endAccessInterval;

@end
