@class NSString;

@interface QLDictionaryItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedOutputClasses;

- (id)transformedContentsFromData:(id)a0 context:(id)a1 error:(id *)a2;
- (id)transformedContentsFromURL:(id)a0 context:(id)a1 error:(id *)a2;

@end
