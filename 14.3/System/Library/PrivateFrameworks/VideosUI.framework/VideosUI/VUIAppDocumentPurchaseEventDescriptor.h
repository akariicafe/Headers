@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (copy, nonatomic) NSString *canonicalID;

- (id)initWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCanonicalID:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
