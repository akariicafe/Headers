@class NSArray, NSString, NSXPCListenerEndpoint;

@interface TKClientToken : NSObject

@property (class, readonly, nonatomic) NSArray *builtinTokenIDs;

@property (readonly, nonatomic) NSString *tokenID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *watcherEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *SEPKeyEndpoint;

- (id)sessionWithLAContext:(id)a0 error:(id *)a1;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;
- (void).cxx_destruct;
- (id)initWithTokenID:(id)a0;
- (id)_initWithTokenID:(id)a0;

@end
