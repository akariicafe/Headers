@class NSUUID, WFVariableString;

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) WFVariableString *synonym;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)a0 synonym:(id)a1;

@end
