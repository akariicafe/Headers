@class NSArray, NSString, REMChangeToken, NSDate, REMObjectID;

@interface REMChangeTransaction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *storeID;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) REMChangeToken *token;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
