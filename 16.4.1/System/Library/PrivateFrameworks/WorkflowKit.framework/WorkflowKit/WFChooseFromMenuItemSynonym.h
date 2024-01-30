@class NSUUID, WFVariableString;

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) WFVariableString *synonym;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 synonym:(id)a1;

@end
