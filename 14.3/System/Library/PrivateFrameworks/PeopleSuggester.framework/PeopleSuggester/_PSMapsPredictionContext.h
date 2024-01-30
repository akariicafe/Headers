@class NSString, NSDate;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *navigationStartLocationId;
@property (copy, nonatomic) NSString *navigationEndLocationId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
