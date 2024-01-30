@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *altText;
@property (nonatomic) long long format;
@property (readonly, nonatomic) BOOL isTall;
@property (nonatomic) BOOL shouldRemoveQuietZone;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPassDictionary:(id)a0 bundle:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
