@class NSString, NSArray, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject

@property (readonly, nonatomic) NSString *typeNamespace;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *placeholderTokens;
@property (readonly, nonatomic) NSString *stringPrefix;
@property (readonly, nonatomic) SignpostSupportMessageArgument *argument;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithArgumentObject:(id)a0 typeNamespace:(id)a1 type:(id)a2 tokens:(id)a3 stringPrefix:(id)a4;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1 didRedactOut:(BOOL *)a2;

@end
