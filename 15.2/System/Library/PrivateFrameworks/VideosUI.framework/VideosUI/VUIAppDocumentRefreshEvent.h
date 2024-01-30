@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <NSCopying>

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)_refreshEventDescriptor;
- (id)initWithRefreshEventDescriptor:(id)a0;

@end
