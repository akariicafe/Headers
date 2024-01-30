@class NSString;

@interface CSFieldSpecification : NSObject {
    NSString *_displayName;
    NSString *_attribute;
    NSString *_status;
    NSString *_token;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *attribute;
@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *token;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryFormat;
- (id)initWithDisplayName:(id)a0 attribute:(id)a1 status:(id)a2 token:(id)a3;

@end
