@class NSString, NSDictionary, OSLogDeserializedEventMessageArgument, OSLogDeserializedMessagePlaceholder;

@interface OSLogDecomposedMessageSegment : NSObject

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) NSString *literalPrefix;
@property (readonly, nonatomic) OSLogDeserializedMessagePlaceholder *placeholder;
@property (readonly, nonatomic) OSLogDeserializedEventMessageArgument *argument;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;

@end
