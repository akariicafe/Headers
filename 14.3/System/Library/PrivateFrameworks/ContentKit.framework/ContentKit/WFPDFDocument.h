@class NSArray;

@interface WFPDFDocument : NSObject

@property (retain, nonatomic) NSArray *pages;
@property (readonly, nonatomic) struct CGPDFDocument { } *documentRef;
@property (readonly, nonatomic) int majorVersion;
@property (readonly, nonatomic) int minorVersion;
@property (nonatomic, getter=isEncrypted) BOOL encrypted;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) BOOL allowsPrinting;
@property (nonatomic) BOOL allowsCopying;
@property (readonly, nonatomic) unsigned long long expectedPageCount;
@property (readonly, nonatomic) Class pageClass;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)initWithDocumentRef:(struct CGPDFDocument { } *)a0;
- (BOOL)unlockWithPassword:(id)a0;

@end
