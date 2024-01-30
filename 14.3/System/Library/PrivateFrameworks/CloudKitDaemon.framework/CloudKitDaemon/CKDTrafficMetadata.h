@class NSString, NSDictionary, NSURL, NSDate;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSString *requestClassName;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
