@class NFVASRequest, NSData, NSNumber;

@interface NFVASResponse : NSObject

@property (retain, nonatomic) NFVASRequest *request;
@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSData *vasData;
@property (retain, nonatomic) NSNumber *statusCode;

+ (BOOL)validateDictionary:(id)a0;

- (id)asDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
