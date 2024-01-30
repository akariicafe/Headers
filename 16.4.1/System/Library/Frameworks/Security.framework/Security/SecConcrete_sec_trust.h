@class NSString;

@interface SecConcrete_sec_trust : NSObject <OS_sec_trust> {
    struct __SecTrust { } *trust;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)dealloc;

@end
