@class NSString, NSData, NSError, NSNumber;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *merchantId;
@property (readonly, retain, nonatomic) NSString *signupUrl;
@property (readonly, retain, nonatomic) NSNumber *terminalAppVersion;
@property (readonly, retain, nonatomic) NSNumber *terminalMode;
@property (readonly, retain, nonatomic) NSNumber *didSucceed;
@property (readonly, retain, nonatomic) NSData *passData;
@property (readonly, retain, nonatomic) NSData *token;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSNumber *filter;
@property (readonly, retain, nonatomic) NSNumber *filterType;
@property (readonly, nonatomic) unsigned int result;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
