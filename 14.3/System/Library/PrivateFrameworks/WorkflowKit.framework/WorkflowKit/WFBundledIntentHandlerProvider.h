@class NSString;

@interface WFBundledIntentHandlerProvider : NSObject <INCLocalExtending, INIntentHandlerProviding>

@property (readonly, nonatomic) NSString *localExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)localIntentHandlerLaunchID;

- (id)init;
- (id)handlerForIntent:(id)a0;

@end
