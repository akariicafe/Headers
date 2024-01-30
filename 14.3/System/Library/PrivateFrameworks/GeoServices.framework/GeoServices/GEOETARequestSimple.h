@class NSString, GEOETARequest;

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest>

@property (retain, nonatomic) GEOETARequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

- (void).cxx_destruct;
- (BOOL)expectsReply;
- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;

@end
