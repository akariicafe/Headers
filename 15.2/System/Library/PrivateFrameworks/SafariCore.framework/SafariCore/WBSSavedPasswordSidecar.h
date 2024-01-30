@class NSDictionary, NSString, WBSTOTPGenerator;

@interface WBSSavedPasswordSidecar : NSObject

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 host:(id)a1;
- (id)initWithUser:(id)a0 host:(id)a1 data:(id)a2;

@end
