@class NSString, NSMutableDictionary, NSMutableArray;

@interface PXTapToRadarConcreteDiagnosticContainer : NSObject <PXTapToRadarDiagnosticContainer>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) NSMutableArray *attachments;
@property (readonly, nonatomic) NSMutableArray *subproviders;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)addAttachment:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)addAttachmentWithText:(id)a0 name:(id)a1;
- (void)addAttachmentWithText:(id)a0 name:(id)a1 extension:(id)a2;
- (void)addAttachmentWithObjectiveCCode:(id)a0 name:(id)a1;
- (void)addAttachmentWithSwiftCode:(id)a0 name:(id)a1;
- (void)addAttachmentWithDictionary:(id)a0 name:(id)a1;
- (void)addAttachmentWithData:(id)a0 name:(id)a1;
- (void)addSubprovider:(id)a0;
- (void)addSubproviders:(id)a0;

@end
