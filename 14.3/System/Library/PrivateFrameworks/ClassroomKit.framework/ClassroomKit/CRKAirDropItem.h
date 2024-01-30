@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *UTI;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithFileURL:(id)a0;
- (id)copyToFolder:(id)a0 error:(id *)a1;
- (id)moveToFolder:(id)a0 error:(id *)a1;

@end
