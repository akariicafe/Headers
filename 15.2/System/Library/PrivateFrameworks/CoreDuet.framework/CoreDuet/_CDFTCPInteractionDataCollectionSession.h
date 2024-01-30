@class NSString, NSData, NSDate;

@interface _CDFTCPInteractionDataCollectionSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *salt;
@property (readonly, copy, nonatomic) NSDate *latestStartDate;
@property (readonly, copy, nonatomic) NSDate *lastCollectionDate;
@property (readonly, nonatomic) unsigned long long batchNumber;

+ (id)generateNewSession;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 salt:(id)a1 latestStartDate:(id)a2 lastCollectionDate:(id)a3 batchNumber:(unsigned long long)a4;
- (id)subsequentSessionWithlatestStartDate:(id)a0 lastCollectionDate:(id)a1;
- (BOOL)isValidForCollectionDate:(id)a0;

@end
