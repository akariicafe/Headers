@class NSArray, NSDictionary;

@interface SGOutput : NSObject

@property (readonly, nonatomic) NSArray *outputItems;
@property (readonly, nonatomic) NSDictionary *sourceMetadata;
@property (readonly, nonatomic) NSArray *exceptionTemplates;
@property (readonly, nonatomic) NSDictionary *jsMessageLogs;

- (void).cxx_destruct;
- (id)initWithOutputItems:(id)a0 exeptionTemplates:(id)a1 jsMessageLogs:(id)a2;
- (id)initWithOutputItems:(id)a0 sourceMetadata:(id)a1 exeptionTemplates:(id)a2 jsMessageLogs:(id)a3;

@end
