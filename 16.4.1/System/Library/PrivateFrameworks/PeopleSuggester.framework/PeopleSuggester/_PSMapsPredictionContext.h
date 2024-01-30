@class NSString, NSArray, NSDate;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *navigationStartLocationId;
@property (copy, nonatomic) NSString *navigationEndLocationId;
@property (copy, nonatomic) NSArray *seedContactIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
