@class NSURL, NSDate;

@interface WBSWebExtensionDeclarativeNetRequestMatchedRuleAction : NSObject

@property (readonly, nonatomic) double tabID;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *url;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTabID:(double)a0 type:(long long)a1 url:(id)a2;

@end
