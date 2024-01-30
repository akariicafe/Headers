@class NSString, IDSService;

@interface CPIDSHelper : NSObject {
    IDSService *_service;
}

@property (readonly, copy, nonatomic) NSString *selfAccountName;

+ (id)convertToIDSDestintation:(id)a0;
+ (BOOL)isMuseCapable;
+ (id)rawAddressForDestination:(id)a0;

- (void).cxx_destruct;
- (id)initWithSevice:(id)a0;
- (id)anySelfAccount;
- (BOOL)isLoggedIn;
- (BOOL)isSelfAlias:(id)a0;

@end
