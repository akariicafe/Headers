@class NSString, NSArray, NSURL, NSDate, NSNumber, NSDictionary;

@interface PPSocialHighlight : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *resourceURL;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *attributionIdentifiers;
@property (readonly, nonatomic) NSDictionary *supplementaryData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 resourceURL:(id)a1 timestamp:(id)a2 attributionIdentifiers:(id)a3 supplementaryData:(id)a4;
- (id)initWithIdentifier:(id)a0 resourceURL:(id)a1 timestamp:(id)a2 attributionIdentifiers:(id)a3 supplementaryData:(id)a4 score:(id)a5;

@end
