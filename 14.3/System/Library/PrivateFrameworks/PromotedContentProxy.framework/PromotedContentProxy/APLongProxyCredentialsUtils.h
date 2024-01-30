@interface APLongProxyCredentialsUtils : NSObject

+ (unsigned long long)decodedSizeForEncodedLength:(unsigned long long)a0;
+ (id)buildTrimmedUrlStringFromUrl:(id)a0 byRemovingBytes:(unsigned long long)a1;
+ (id)buildTrimmedUrlStringFromUrl:(id)a0 toReduceEncodedSizeBy:(unsigned long long)a1;
+ (unsigned long long)basicProxyAuthHeaderSizeForUser:(id)a0 withPassword:(id)a1;

@end
