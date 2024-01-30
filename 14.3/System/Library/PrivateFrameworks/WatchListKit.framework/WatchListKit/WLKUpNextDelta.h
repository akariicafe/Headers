@class NSArray, NSDictionary, NSDate;

@interface WLKUpNextDelta : NSObject <NSSecureCoding> {
    NSDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSArray *additions;
@property (readonly, copy, nonatomic) NSArray *removals;

- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)deltaByMergingItemsFromDelta:(id)a0;

@end
