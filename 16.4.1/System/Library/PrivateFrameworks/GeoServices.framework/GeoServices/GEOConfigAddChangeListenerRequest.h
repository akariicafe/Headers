@class NSDictionary, NSString;

@interface GEOConfigAddChangeListenerRequest : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) NSDictionary *keysAndSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (BOOL)expectsReply;
- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (void).cxx_destruct;

@end
