@class NSNumber, NSString, NSError;

@interface BLRestoreResponseItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *storeItemID;
@property (copy, nonatomic) NSString *downloadID;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL success;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreItemID:(id)a0 downloadID:(id)a1 error:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
