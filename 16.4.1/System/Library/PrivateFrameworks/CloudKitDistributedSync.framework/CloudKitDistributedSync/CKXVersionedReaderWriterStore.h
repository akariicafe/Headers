@class CKXORCReader, NSDictionary, CKXORCWriter, NSObject;
@protocol CKXBinding;

@interface CKXVersionedReaderWriterStore : NSObject

@property (retain, nonatomic) CKXORCReader *orcReader;
@property (retain, nonatomic) CKXORCWriter *orcWriter;
@property (retain, nonatomic) NSObject<CKXBinding> *binding;
@property (retain, nonatomic) NSDictionary *optionsByReaderWriterClass;

+ (BOOL)versionSupported:(unsigned char)a0;

- (void).cxx_destruct;
- (id)createReaderForVersionIfNecessary:(unsigned char)a0;
- (id)createWriterForVersionIfNecessary:(unsigned char)a0;
- (id)initWithBinding:(id)a0 optionsByReaderWriterClass:(id)a1;
- (id)readerForVersion:(unsigned char)a0;
- (id)writerForVersion:(unsigned char)a0;

@end
