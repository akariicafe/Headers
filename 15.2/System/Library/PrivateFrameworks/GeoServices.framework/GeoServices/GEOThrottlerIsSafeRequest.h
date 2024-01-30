@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) int requestKindType;
@property (nonatomic) int requestKindSubtype;
@property (nonatomic) BOOL nextSafeRequestTime;
@property (nonatomic) BOOL availableRequestCount;
@property (nonatomic) BOOL includeToken;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (BOOL)expectsReply;
- (id)initWithTraits:(id)a0 auditToken:(id)a1 throttleToken:(id)a2;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
