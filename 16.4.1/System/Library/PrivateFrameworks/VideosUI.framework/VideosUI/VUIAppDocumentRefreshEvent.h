@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <NSCopying>

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRefreshEventDescriptor:(id)a0;
- (id)_refreshEventDescriptor;

@end
