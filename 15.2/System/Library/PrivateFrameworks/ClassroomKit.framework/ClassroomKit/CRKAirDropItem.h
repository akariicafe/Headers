@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *UTI;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithFileURL:(id)a0;
- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)copyToFolder:(id)a0 error:(id *)a1;
- (id)moveToFolder:(id)a0 error:(id *)a1;

@end
