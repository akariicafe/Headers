@class POWSchemaProvisionalPOWUsage, SISchemaInstrumentationMessage, POWSchemaProvisionalPOWProcessUsage, POWSchemaProvisionalPOWClientEvent;

@interface SPISELFMessageBuilder : NSObject

@property (retain, nonatomic) POWSchemaProvisionalPOWClientEvent *powClientEventMsg;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usageMsg;
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *procUsageMsg;
@property (retain, nonatomic) SISchemaInstrumentationMessage *eventContextMsg;

- (void)addProcess:(unsigned char)a0;
- (void)addContext:(id)a0;
- (id)buildMessage;
- (void)addProcessUsage:(struct SPIResourceUsage { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)addRequestLinkInfoForComponent:(int)a0 identifier:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
