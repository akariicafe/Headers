@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSHTTPURLResponse *response;
@property (retain) NSData *data;
@property (copy) NSString *requestBodyKeyPath;
@property (copy) NSString *mockID;

+ (id)objectFromPlist:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
