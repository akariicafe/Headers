@class NSString;

@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *autoAssetClientName;
@property (retain, nonatomic) NSString *lockReason;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromClientLockReasonKey:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;
- (id)initForClientName:(id)a0 forLockReason:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
