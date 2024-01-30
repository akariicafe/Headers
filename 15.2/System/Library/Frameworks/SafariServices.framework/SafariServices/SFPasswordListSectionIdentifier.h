@class NSString;

@interface SFPasswordListSectionIdentifier : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *footerText;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 headerText:(id)a1 footerText:(id)a2;

@end
