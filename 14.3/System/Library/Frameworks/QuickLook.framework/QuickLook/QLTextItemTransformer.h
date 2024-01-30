@class NSString;

@interface QLTextItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedOutputClasses;

- (id)wrapperFromData:(id)a0 encoding:(unsigned long long)a1 mimeType:(id)a2 error:(id *)a3;
- (id)transformedContentsFromURL:(id)a0 context:(id)a1 error:(id *)a2;
- (id)transformedContentsFromData:(id)a0 context:(id)a1 error:(id *)a2;

@end
