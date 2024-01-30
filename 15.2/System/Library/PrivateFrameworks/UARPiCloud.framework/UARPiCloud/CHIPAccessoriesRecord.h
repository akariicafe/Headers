@class NSString, NSSet, NSMutableSet, CKRecord, NSObject;
@protocol OS_os_log;

@interface CHIPAccessoriesRecord : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
    NSMutableSet *_accessoryMutableList;
    NSString *_zone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *accessoryListSignature;
@property (readonly) NSString *stonehengeCertificateID;
@property (readonly) NSSet *accessoryList;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAccessoryList:(id)a0;
- (void)createAccessoryListFromRecord;
- (id)initWithCKRecord:(id)a0 zone:(id)a1;

@end
