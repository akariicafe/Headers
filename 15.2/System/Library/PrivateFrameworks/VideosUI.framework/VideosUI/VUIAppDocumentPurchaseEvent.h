@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)_purchaseEventDescriptor;
- (id)initWithPurchaseEventDescriptor:(id)a0;

@end
