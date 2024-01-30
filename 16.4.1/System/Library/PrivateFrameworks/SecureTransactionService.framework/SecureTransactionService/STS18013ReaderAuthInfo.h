@class NSString;

@interface STS18013ReaderAuthInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSString *organizationUnit;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationUnit:(id)a2;

@end
