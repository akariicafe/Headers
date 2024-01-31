@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;

+ (void)initialize;
+ (id)new;

- (id)init;
- (void)setRecordType:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithSubscriptionID:(id)a0;

@end
