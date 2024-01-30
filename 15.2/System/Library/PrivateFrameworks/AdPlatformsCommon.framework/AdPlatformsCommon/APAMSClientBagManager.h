@class AMSBagKeySet, NSString;

@interface APAMSClientBagManager : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)isSubsequentAdsFetchDisabled:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)adprivacydBag;
+ (BOOL)isSubsequentAdsFetchDisabled;


@end
