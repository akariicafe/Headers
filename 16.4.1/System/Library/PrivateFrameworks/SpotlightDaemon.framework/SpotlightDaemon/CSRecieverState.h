@class NSSet, CSReceiverPreferences;

@interface CSRecieverState : NSObject

@property (readonly, nonatomic) CSReceiverPreferences *receiverPreferences;
@property (readonly, nonatomic) NSSet *enabledBundleIdentifiers;
@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;
@property (readonly, nonatomic) int notifyToken;

+ (id)sharedInstance;

- (BOOL)checkBundleIdentifier:(id)a0;
- (void)_updateFromPreferences;
- (id)init;
- (void).cxx_destruct;

@end
