@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (int)width;
- (id)typeNamespace;
- (int)precision;
- (id)rawString;
- (id)tokens;
- (id)type;
- (void).cxx_destruct;

@end
