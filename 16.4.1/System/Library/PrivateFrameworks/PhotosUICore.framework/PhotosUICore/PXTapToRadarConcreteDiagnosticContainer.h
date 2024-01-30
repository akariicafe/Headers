@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray;

@interface PXTapToRadarConcreteDiagnosticContainer : NSObject <PXTapToRadarDiagnosticContainer> {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_attachments;
    NSMutableArray *_subproviders;
    NSMutableArray *_collectionOperations;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSArray *subproviders;

- (id)initWithName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addAttachment:(id)a0;
- (void)addSubprovider:(id)a0;
- (void)addAttachmentWithData:(id)a0 name:(id)a1;
- (void)addAttachmentWithDictionary:(id)a0 name:(id)a1;
- (void)addAttachmentWithObjectiveCCode:(id)a0 name:(id)a1;
- (void)addAttachmentWithSwiftCode:(id)a0 name:(id)a1;
- (void)addAttachmentWithText:(id)a0 name:(id)a1;
- (void)addAttachmentWithText:(id)a0 name:(id)a1 extension:(id)a2;
- (void)addSubproviders:(id)a0;
- (id)beginCollectionOperationWithName:(id)a0 timeout:(double)a1;

@end
