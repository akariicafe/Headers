@interface CDPDAccount : NSObject

@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

+ (id)sharedInstance;

- (BOOL)isICDPEnabledForDSID:(id)a0;
- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

@end
