@class NSString, NSUUID, NSObject;
@protocol OS_xpc_object;

@interface LASSProperties4RB : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUUID *instance;
@property (readonly, nonatomic) int requestedJetsamPriority;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties;
@property (readonly, nonatomic) NSString *program;
@property (readonly, nonatomic) unsigned int processType;
@property (readonly, nonatomic) BOOL keepAlive;
@property (readonly, nonatomic) BOOL runAtLoad;
@property (readonly, nonatomic) BOOL enableTransactions;
@property (readonly, nonatomic) BOOL enablePressuredExit;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoints;
@property (readonly, nonatomic) long long serviceType;

+ (id)_propertiesFromAttrs:(id)a0;
+ (id)propertiesForPid:(int)a0 error:(id *)a1;
+ (id)propertiesForJob:(id)a0 error:(id *)a1;

- (id)initWithLabel:(id)a0 instance:(id)a1 requestedJetsamPriority:(int)a2 additionalProperties:(id)a3 program:(id)a4 processType:(unsigned int)a5 keepAlive:(BOOL)a6 runAtLoad:(BOOL)a7 enableTransactions:(BOOL)a8 endpoints:(id)a9 serviceType:(long long)a10;
- (void).cxx_destruct;

@end
