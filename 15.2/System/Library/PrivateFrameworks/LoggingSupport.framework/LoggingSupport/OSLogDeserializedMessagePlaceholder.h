@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (int)precision;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)tokens;
- (id)typeNamespace;
- (int)width;
- (void).cxx_destruct;
- (id)rawString;
- (id)type;

@end
