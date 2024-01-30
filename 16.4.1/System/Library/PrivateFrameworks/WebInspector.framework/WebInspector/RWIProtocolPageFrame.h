@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *loaderId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *securityOrigin;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *name;

- (id)initWithIdentifier:(id)a0 loaderId:(id)a1 url:(id)a2 securityOrigin:(id)a3 mimeType:(id)a4;

@end
