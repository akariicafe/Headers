@class NSString;

@interface WBSHideMyEmailRecord : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *privateEmailAddress;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(id)a0 state:(unsigned long long)a1 privateEmailAddress:(id)a2;

@end
