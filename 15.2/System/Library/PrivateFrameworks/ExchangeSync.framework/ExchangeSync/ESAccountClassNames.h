@class NSString;

@interface ESAccountClassNames : NSObject

@property (retain, nonatomic) NSString *accountClassName;
@property (retain, nonatomic) NSString *clientAccountClassName;
@property (retain, nonatomic) NSString *daemonAccountClassName;
@property (retain, nonatomic) NSString *agentClassName;

- (id)description;
- (void).cxx_destruct;

@end
