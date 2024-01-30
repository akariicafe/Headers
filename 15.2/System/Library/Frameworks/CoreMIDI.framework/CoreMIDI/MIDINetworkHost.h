@class NSString;

@interface MIDINetworkHost : NSObject {
    void *_imp;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) unsigned long long port;
@property (readonly, nonatomic) NSString *netServiceName;
@property (readonly, nonatomic) NSString *netServiceDomain;

+ (id)hostWithName:(id)a0 address:(id)a1 port:(unsigned long long)a2;
+ (id)hostWithName:(id)a0 netServiceName:(id)a1 netServiceDomain:(id)a2;
+ (id)hostWithName:(id)a0 netService:(id)a1;
+ (id)fromAddressAsText:(id)a0 withName:(id)a1;

- (id)displayName;
- (void)setName:(id)a0;
- (id)host;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)addressAsText;
- (BOOL)hasSameAddressAs:(id)a0;

@end
