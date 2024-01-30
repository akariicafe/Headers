@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *recordType;

+ (id)new;

- (id)CKPropertiesDescription;
- (id)initWithSubscriptionID:(id)a0;
- (id)init;
- (void)setRecordType:(id)a0;
- (id)initWithCoder:(id)a0;

@end
