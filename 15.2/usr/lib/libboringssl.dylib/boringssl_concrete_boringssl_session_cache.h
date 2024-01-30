@class NSString, NSObject;
@protocol OS_nw_association;

@interface boringssl_concrete_boringssl_session_cache : NSObject <OS_boringssl_session_cache> {
    NSObject<OS_nw_association> *association;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
