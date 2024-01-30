@class NSString, CKDMMCSItemGroupContext, CKDMMCSItem, NSMutableData;

@interface CKDMMCSItemFileWriter : NSObject <CKDMMCSItemReaderWriterProtocol>

@property (retain, nonatomic) CKDMMCSItemGroupContext *MMCSRequest;
@property (retain, nonatomic) CKDMMCSItem *MMCSItem;
@property (retain, nonatomic) NSMutableData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeWithError:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (id)initWithMMCSItem:(id)a0 MMCSRequest:(id)a1;
- (id)getFileMetadataWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)readBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesRead:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)writeBytesAtOffset:(unsigned long long)a0 bytes:(char *)a1 length:(unsigned long long)a2 bytesWritten:(unsigned long long *)a3 error:(id *)a4;
- (void)dealloc;

@end
