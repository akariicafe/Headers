@interface BPSIconCachePrivacyHelper : NSObject

+ (void)setCachePath:(id)a0;
+ (id)_naiveHashForString:(id)a0;
+ (id)_perDeviceSalt;
+ (id)saltedHashForString:(id)a0;

@end
