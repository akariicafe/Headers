@class NSString, NSDictionary, NSDate;

@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *ownerEmail;
@property (retain, nonatomic) NSString *ownerFullName;
@property (retain, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSString *ownerFirstName;
@property (retain, nonatomic) NSString *ownerLastName;
@property (nonatomic) BOOL ownerIsWhitelisted;
@property (retain, nonatomic) NSDate *subscriptionDate;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) int relationshipState;
@property (retain, nonatomic) NSString *foreignCtag;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *publicURLString;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id context;
@property (nonatomic) BOOL isFamilySharedAlbum;
@property (readonly, nonatomic) BOOL useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)metadataValueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;

@end
