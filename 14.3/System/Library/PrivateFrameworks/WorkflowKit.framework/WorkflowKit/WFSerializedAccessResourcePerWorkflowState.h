@class NSString, NSData, NSDictionary;

@interface WFSerializedAccessResourcePerWorkflowState : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithIdentifier:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
