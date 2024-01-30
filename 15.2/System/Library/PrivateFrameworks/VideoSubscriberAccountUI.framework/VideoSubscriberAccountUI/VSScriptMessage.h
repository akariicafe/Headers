@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject

@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) VSScriptSecurityOrigin *source;
@property (retain, nonatomic) VSScriptSecurityOrigin *target;

- (id)description;
- (void).cxx_destruct;

@end
