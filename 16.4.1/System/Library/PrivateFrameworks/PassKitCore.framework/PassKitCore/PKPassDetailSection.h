@class NSString, NSArray;

@interface PKPassDetailSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSString *insertAfterSection;
@property (retain, nonatomic) NSArray *rows;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *identifier;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;
- (id)initWithRows:(id)a0;

@end
