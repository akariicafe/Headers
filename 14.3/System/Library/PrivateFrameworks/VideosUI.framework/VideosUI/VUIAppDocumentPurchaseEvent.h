@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *canonicalID;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)_purchaseEventDescriptor;
- (id)initWithPurchaseEventDescriptor:(id)a0;

@end
