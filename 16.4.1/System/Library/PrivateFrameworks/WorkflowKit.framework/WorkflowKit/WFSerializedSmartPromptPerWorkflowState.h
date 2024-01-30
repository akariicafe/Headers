@class NSString, NSData, NSDictionary;

@interface WFSerializedSmartPromptPerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *actionUUID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 actionUUID:(id)a1;

@end
