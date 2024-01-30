@class NSString;
@protocol FCAppleAccount;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider>

@property (readonly, nonatomic) id<FCAppleAccount> appleAccount;
@property (readonly, nonatomic) NSString *storeFrontIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppleAccount:(id)a0;
- (void).cxx_destruct;

@end
