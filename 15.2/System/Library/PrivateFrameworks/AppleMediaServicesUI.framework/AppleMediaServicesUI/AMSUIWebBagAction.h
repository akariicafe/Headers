@class NSString, NSArray;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable>

@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSArray *requestedKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
