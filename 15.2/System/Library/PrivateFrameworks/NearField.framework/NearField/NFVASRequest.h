@class NSString, NSURL, NSData, NSNumber;

@interface NFVASRequest : NSObject

@property (retain, nonatomic) NSNumber *terminalCap;
@property (retain, nonatomic) NSNumber *terminalProtocol;
@property (retain, nonatomic) NSString *merchantId;
@property (retain, nonatomic) NSURL *signupUrl;
@property (retain, nonatomic) NSData *filter;

+ (BOOL)validateDictionary:(id)a0;

- (id)asDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
