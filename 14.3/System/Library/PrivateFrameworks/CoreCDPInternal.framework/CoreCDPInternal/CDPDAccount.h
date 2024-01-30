@interface CDPDAccount : NSObject

@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

+ (id)sharedInstance;

- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
- (BOOL)isICDPEnabledForDSID:(id)a0;

@end
