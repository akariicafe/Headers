@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemNavigationActionContextWithTitle:(id)a0 bundleId:(id)a1;
+ (id)systemNavigationActionContextWithURL:(id)a0;
+ (id)systemNavigationActionContextWithTitle:(id)a0 andURL:(id)a1;
+ (id)systemNavigationActionContextWithTitle:(id)a0 sceneIdentifier:(id)a1;

@end
