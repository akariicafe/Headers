@class NSString, NSData;
@protocol NSSecureCoding;

@interface CKDPCSData : NSObject <PQLValuable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *pcsKeyID;
@property (readonly, nonatomic) id<NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *pcs;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSData *pcsData;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;

- (BOOL)shouldEncodePCSData;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPCSData:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
