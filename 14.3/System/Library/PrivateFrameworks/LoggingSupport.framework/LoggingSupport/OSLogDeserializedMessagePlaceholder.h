@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (int)width;
- (id)tokens;
- (void).cxx_destruct;
- (id)rawString;
- (int)precision;
- (id)type;
- (id)typeNamespace;
- (id)initWithDict:(id)a0 metadata:(id)a1;

@end
