@class NSString, ICQImageURL, NSURL, NSDictionary, NSNumber;

@interface ICQBackupDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSString *deviceSubtitle;
@property (copy, nonatomic) NSString *storageUsedLabel;
@property (retain, nonatomic) NSNumber *storageUsed;
@property (retain, nonatomic) NSNumber *backupSize;
@property (retain, nonatomic) ICQImageURL *imageURL;
@property (retain, nonatomic) ICQImageURL *largeImageURL;
@property (copy, nonatomic) NSString *detailViewController;
@property (retain, nonatomic) NSNumber *backupTimestamp;
@property (retain, nonatomic) NSURL *deleteURL;
@property (copy, nonatomic) NSString *deleteButtonLabel;
@property (retain, nonatomic) NSNumber *backupFailedByinBytes;
@property (retain, nonatomic) NSNumber *bytesRequiredForBackup;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isLocalBackup;
@property (readonly, nonatomic) NSDictionary *rawDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
