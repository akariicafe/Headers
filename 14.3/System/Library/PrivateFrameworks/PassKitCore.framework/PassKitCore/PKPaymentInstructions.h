@class NSDictionary, NSData, NSArray;

@interface PKPaymentInstructions : NSObject

@property (retain, nonatomic) NSDictionary *instructionsDictionary;
@property (retain, nonatomic) NSData *instructionsData;
@property (retain, nonatomic) NSData *signatureData;
@property (retain, nonatomic) NSData *fortifiedInstructionsData;
@property (retain, nonatomic) NSData *fortifiedSignatureData;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *allImageKeys;

- (void).cxx_destruct;
- (id)_imageDataForImageWithKey:(id)a0 format:(id *)a1;
- (struct CGDataProvider { } *)_createImageDataProviderForImageKey:(id)a0;
- (void)_pruneDirectoryAtURL:(id)a0;
- (BOOL)archiveToDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)description;
- (struct CGImage { } *)imageForKey:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
