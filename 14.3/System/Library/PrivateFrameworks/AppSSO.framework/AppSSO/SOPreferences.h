@interface SOPreferences : NSObject

@property (class, readonly, nonatomic) BOOL isExtensionSignatureValidated;
@property (class, readonly, nonatomic) BOOL isAssociatedDomainValidated;

+ (BOOL)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(BOOL)a1;

@end
