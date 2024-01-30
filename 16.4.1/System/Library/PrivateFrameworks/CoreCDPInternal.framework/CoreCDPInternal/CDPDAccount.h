@interface CDPDAccount : NSObject

@property (nonatomic) BOOL hasDisabledKeychainExplicitly;

- (BOOL)isOTEnabledForContext:(id)a0;
- (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

@end
