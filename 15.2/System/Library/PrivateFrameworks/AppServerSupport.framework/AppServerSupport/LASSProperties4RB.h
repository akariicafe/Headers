@class NSString, NSUUID, NSObject;
@protocol OS_xpc_object;

@interface LASSProperties4RB : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUUID *instance;
@property (readonly, nonatomic) int requestedJetsamPriority;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *additionalProperties;
@property (readonly, nonatomic) NSString *program;

+ (id)propertiesForJob:(id)a0 error:(id *)a1;
+ (id)propertiesForPid:(int)a0 error:(id *)a1;
+ (id)_propertiesFromAttrs:(id)a0;

- (id)initWithLabel:(id)a0 instance:(id)a1 requestedJetsamPriority:(int)a2 additionalProperties:(id)a3 program:(id)a4;
- (void).cxx_destruct;

@end
