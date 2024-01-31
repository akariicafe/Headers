@class NSData;

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long changeRecordID;
@property (readonly, nonatomic) NSData *historyToken;
@property (readonly, nonatomic) long long sequenceNumber;

- (void)encodeWithCoder:(id)a0;
- (id)initWithHistoryToken:(id)a0 error:(id *)a1;
- (long long)compare:(id)a0;
- (id)initWithSequenceNumber:(long long)a0;
- (id)description;
- (id)initWithSequenceNumber:(long long)a0 changeRecordID:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
