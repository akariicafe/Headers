@interface BCSHashService : NSObject

+ (BOOL)isValidFullHash:(id)a0;
+ (id)SHA256HashForInputString:(id)a0;
+ (long long)SHA256TruncatedHashForInputString:(id)a0 includedBytes:(unsigned long long)a1;
+ (long long)truncatedHashForFullHash:(id)a0 includedBytes:(unsigned long long)a1;

@end
