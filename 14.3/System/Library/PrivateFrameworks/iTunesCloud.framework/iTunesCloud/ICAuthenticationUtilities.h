@class AKAppleIDSession;

@interface ICAuthenticationUtilities : NSObject

@property (class, readonly) AKAppleIDSession *sharedAuthKitSession;

@end
