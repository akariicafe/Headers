@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSURL *reference;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
