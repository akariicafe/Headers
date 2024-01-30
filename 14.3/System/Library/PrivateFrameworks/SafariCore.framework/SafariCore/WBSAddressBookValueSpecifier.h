@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *component;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *parentProperty;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithProperty:(id)a0 component:(id)a1 label:(id)a2;
- (id)initWithProperty:(id)a0 component:(id)a1 label:(id)a2 category:(id)a3 parentProperty:(id)a4;
- (BOOL)isEqual:(id)a0;

@end
