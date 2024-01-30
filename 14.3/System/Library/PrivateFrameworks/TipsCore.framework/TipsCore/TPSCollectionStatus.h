@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canNotified;
@property (nonatomic) BOOL skipFeature;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *activatedDate;
@property (copy, nonatomic) NSDate *firstViewedDate;
@property (copy, nonatomic) NSDate *featuredDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
