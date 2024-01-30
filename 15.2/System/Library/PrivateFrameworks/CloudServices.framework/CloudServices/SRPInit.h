@class NSString, NSDictionary, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest>

@property (readonly, copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recordLabel;
@property (readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property (retain, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *recordID;
@property (readonly, retain, nonatomic) SecureBackup *sb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)validateInput;
- (id)initWithSecureBackup:(id)a0;

@end
