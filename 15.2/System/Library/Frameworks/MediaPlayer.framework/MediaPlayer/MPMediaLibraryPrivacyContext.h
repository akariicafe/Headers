@class PAAccessInterval, PAApplication;

@interface MPMediaLibraryPrivacyContext : NSObject {
    PAApplication *_clientApplication;
    PAAccessInterval *_privacyAccessInterval;
}

+ (void)initialize;
+ (id)sharedContextForCurrentProcess;
+ (id)contextForDefaultClient;
+ (void)setDefaultClientWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithClientIdentity:(id)a0;
- (id)initWithPAApplication:(id)a0;
- (void)logPrivacyAccess;
- (void)beginAccessInterval;
- (void)endAccessInterval;
- (void).cxx_destruct;
- (id)init;

@end
