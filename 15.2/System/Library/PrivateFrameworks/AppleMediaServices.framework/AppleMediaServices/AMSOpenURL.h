@class NSURL, NSMutableSet, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject

@property (retain, nonatomic) NSMutableSet *attemptedTargets;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) id<AMSBagProtocol> bag;

+ (id)openURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;
+ (BOOL)_openURL:(id)a0 inApp:(id)a1;
+ (unsigned long long)_openModeForStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (BOOL)_openURLWithLaunchServices:(id)a0;
+ (id)_modifiedURLFromURL:(id)a0 bundleInfo:(id)a1;
+ (BOOL)_shouldOpenStandardURL:(id)a0 inApp:(id)a1 withLinks:(id)a2;
+ (void)openURL:(id)a0 account:(id)a1 preferredClient:(id)a2;
+ (BOOL)openStandardURL:(id)a0;

- (id)initWithURL:(id)a0 clientInfo:(id)a1 bag:(id)a2;
- (BOOL)_openURL:(id)a0 bundleInfo:(id)a1;
- (BOOL)_shouldOpenURL:(id)a0;
- (void).cxx_destruct;
- (id)_performOpen;

@end
