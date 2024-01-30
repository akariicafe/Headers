@class NSString, NSDictionary;

@interface PCCRequest : NSObject

@property (readonly) NSString *jid;
@property (readonly) NSString *event;
@property (readonly) NSString *type;
@property (copy) id /* block */ callback;
@property (readonly) NSDictionary *options;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMessage:(id)a0 options:(id)a1;

@end
