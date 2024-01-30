@class NSData, CKDPRecordIdentifier, NSNumber;

@interface CKDAssetID : NSObject <NSCopying>

@property (readonly, nonatomic) CKDPRecordIdentifier *recordID;
@property (readonly, nonatomic) NSData *fileSignature;
@property (readonly, nonatomic) NSData *referenceSignature;
@property (readonly, nonatomic) NSNumber *size;

- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordID:(id)a0 fileSignature:(id)a1 referenceSignature:(id)a2 size:(id)a3;
- (unsigned long long)hash;

@end
