@class NSData, CKXSchema;

@interface CKXReaderBase : NSObject

@property (readonly, nonatomic) CKXSchema *schema;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
