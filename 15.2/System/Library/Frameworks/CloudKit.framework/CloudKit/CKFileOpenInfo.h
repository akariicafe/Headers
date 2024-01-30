@class NSString, NSNumber, NSFileHandle;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
