@interface ASTConnectionUtilities : NSObject

+ (BOOL)isGzipEnabled;
+ (BOOL)isValidResponse:(id)a0;
+ (BOOL)didEncounterNetworkDisconnectionError:(id)a0;
+ (BOOL)trustIsValidWithProtectionSpace:(id)a0 rootOfTrust:(unsigned long long)a1;
+ (id)MD5HeaderValueForTask:(id)a0;
+ (BOOL)relaxTimeouts;
+ (id)getServerLoggingSelection;
+ (BOOL)useChunkedTransferEncoding;
+ (unsigned long long)allowCellularSizeThreshold;

@end
