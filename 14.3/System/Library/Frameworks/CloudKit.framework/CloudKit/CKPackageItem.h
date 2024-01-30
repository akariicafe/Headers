@class NSString, NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject

@property (nonatomic) long long packageIndex;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long itemID;
@property (copy, nonatomic) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic) long long offset;
@property (nonatomic) int sectionIndex;
@property (copy, nonatomic) NSNumber *deviceID;
@property (copy, nonatomic) NSNumber *fileID;
@property (copy, nonatomic) NSNumber *generationID;
@property (copy, nonatomic) NSData *wrappedAssetKey;
@property (copy, nonatomic) NSString *itemTypeHint;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 fileID:(id)a1 generationID:(id)a2;
- (id)initWithFileURL:(id)a0;
- (id)description;

@end
