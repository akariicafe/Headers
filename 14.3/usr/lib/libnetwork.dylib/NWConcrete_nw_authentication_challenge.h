@class NSString, NWConcrete_nw_authentication_protection_space;

@interface NWConcrete_nw_authentication_challenge : NSObject <OS_nw_authentication_challenge> {
    NWConcrete_nw_authentication_protection_space *protection_space;
    void *http_message;
    int type;
    unsigned int attempt_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
