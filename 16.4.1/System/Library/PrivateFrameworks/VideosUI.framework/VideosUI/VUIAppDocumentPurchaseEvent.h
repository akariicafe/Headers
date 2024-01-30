@class NSString;

@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *canonicalID;

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)_purchaseEventDescriptor;
- (id)initWithPurchaseEventDescriptor:(id)a0;

@end
