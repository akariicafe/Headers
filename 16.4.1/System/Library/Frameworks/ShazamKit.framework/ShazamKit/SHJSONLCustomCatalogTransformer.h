@class NSError, NSDictionary, NSString;
@protocol SHJSONLCustomCatalogTransformerDelegate;

@interface SHJSONLCustomCatalogTransformer : NSObject <SHJSONLDataDetokenizerDelegate>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *header;
@property (weak, nonatomic) id<SHJSONLCustomCatalogTransformerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)IDFromFileRow:(id)a0;
+ (BOOL)objectIsHeader:(id)a0;
+ (id)catalogFileRepresentationOfMediaItems:(id)a0 withID:(id)a1 error:(id *)a2;
+ (id)catalogFileRepresentationOfSignature:(id)a0 withID:(id)a1;
+ (id)headerFromFileRow:(id)a0;
+ (id)mediaItemFromFileRow:(id)a0 error:(id *)a1;
+ (BOOL)objectIsMediaItem:(id)a0;
+ (BOOL)objectIsSignature:(id)a0;
+ (id)outputFileHeader;
+ (id)signatureFromFileRow:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)parsedJSONObject:(id)a0 error:(id *)a1;

@end
