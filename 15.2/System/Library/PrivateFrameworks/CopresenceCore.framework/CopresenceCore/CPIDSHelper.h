@class NSString, IDSService;

@interface CPIDSHelper : NSObject {
    IDSService *_service;
}

@property (readonly, copy, nonatomic) NSString *selfAccountName;

+ (id)convertToIDSDestintation:(id)a0;
+ (id)rawAddressForDestination:(id)a0;
+ (BOOL)isMuseCapable;

- (void).cxx_destruct;
- (BOOL)isLoggedIn;
- (id)initWithSevice:(id)a0;
- (BOOL)isSelfAlias:(id)a0;
- (id)anySelfAccount;

@end
