@class NSString, CKRecordID;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long referenceAction;
@property (readonly, copy, nonatomic) CKRecordID *recordID;

+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)a0;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)a0;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initBare;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (id)initWithRecord:(id)a0 action:(unsigned long long)a1;
- (id)initWithRecordID:(id)a0 action:(unsigned long long)a1;

@end
