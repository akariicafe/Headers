@class NSError, NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCReply : NSObject <GEOXPCSerializable>

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
@property (readonly, nonatomic) unsigned char flags;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (id)initWithRequest:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
