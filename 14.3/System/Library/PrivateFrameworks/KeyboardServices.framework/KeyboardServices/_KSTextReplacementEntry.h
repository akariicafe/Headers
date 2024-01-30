@class NSString, NSData, NSDate;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *cloudData;
@property BOOL needsSaveToCloud;
@property BOOL wasDeleted;
@property (copy, nonatomic) NSString *cloudID;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) _KSTextReplacementEntry *priorValue;

+ (id)localEntryFromCloudEntry:(id)a0;

- (id)uniqueID;
- (id)init;
- (id)encryptedFields;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)unEncryptedFields;
- (id)uniqueRecordName;
- (id)uniqueRecordNameVer0;
- (void)encodeWithCoder:(id)a0;

@end
