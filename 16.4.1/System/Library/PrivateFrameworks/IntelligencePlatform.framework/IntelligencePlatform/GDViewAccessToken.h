@class NSData, NSURL, NSString;

@interface GDViewAccessToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *token;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *tableName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0 url:(id)a1 tableName:(id)a2;

@end
