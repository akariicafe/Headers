@class NSSet, CSReceiverPreferences;

@interface CSRecieverState : NSObject

@property (readonly, nonatomic) CSReceiverPreferences *receiverPreferences;
@property (readonly, nonatomic) NSSet *enabledBundleIdentifiers;
@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;
@property (readonly, nonatomic) int notifyToken;

+ (id)sharedInstance;

- (void)_updateFromPreferences;
- (void).cxx_destruct;
- (id)init;
- (BOOL)checkBundleIdentifier:(id)a0;

@end
