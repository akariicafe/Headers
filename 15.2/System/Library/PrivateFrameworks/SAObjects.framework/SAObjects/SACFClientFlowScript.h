@class SACFScriptUrlInformation, NSString, SACFScriptEncryptionParameters, NSData;

@interface SACFClientFlowScript : SABaseAceObject

@property (copy, nonatomic) NSData *compressedScript;
@property (retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property (copy, nonatomic) NSString *fileContentType;
@property (copy, nonatomic) NSString *jsScript;
@property (copy, nonatomic) NSData *jsScriptChecksum;
@property (copy, nonatomic) NSString *jsScriptIdentifier;
@property (nonatomic) BOOL shouldCacheScript;
@property (nonatomic) BOOL shouldSkipExecution;
@property (retain, nonatomic) SACFScriptUrlInformation *urlInformation;

+ (id)clientFlowScript;
+ (id)clientFlowScriptWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
