@class NSString;

@interface DEDHealthLogsEncryptor : NSObject <DEDEncryptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encryptLogsAtPath:(id)a0 outputDirectory:(id)a1;

@end
