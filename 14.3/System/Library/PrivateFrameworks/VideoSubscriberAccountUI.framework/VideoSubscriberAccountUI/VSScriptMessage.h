@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject

@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) VSScriptSecurityOrigin *source;
@property (retain, nonatomic) VSScriptSecurityOrigin *target;

- (void).cxx_destruct;
- (id)description;

@end
