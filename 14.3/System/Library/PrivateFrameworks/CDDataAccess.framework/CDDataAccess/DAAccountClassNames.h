@class NSString;

@interface DAAccountClassNames : NSObject

@property (retain, nonatomic) NSString *accountClassName;
@property (retain, nonatomic) NSString *clientAccountClassName;
@property (retain, nonatomic) NSString *daemonAccountClassName;
@property (retain, nonatomic) NSString *agentClassName;

- (void).cxx_destruct;
- (id)description;

@end
