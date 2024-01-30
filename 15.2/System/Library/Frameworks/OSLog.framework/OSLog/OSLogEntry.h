@class NSString, NSDate;

@interface OSLogEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long storeCategory;

- (id)initWithEventProxy:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 composedMessage:(id)a1;

@end
