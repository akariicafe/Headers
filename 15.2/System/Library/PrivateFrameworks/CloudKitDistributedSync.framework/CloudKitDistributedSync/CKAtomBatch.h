@class CKXBackingStore, CKAtomLocation, CKAtomBatchEnumerationOptions, NSData;

@interface CKAtomBatch : NSObject

@property (retain, nonatomic) CKAtomLocation *location;
@property (retain, nonatomic) CKXBackingStore *backingStore;
@property (retain, nonatomic) CKAtomBatchEnumerationOptions *enumerationOptions;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; } writerIdentity;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long numberOfAtoms;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)finishWriting;
- (id)initWriter;
- (id)initWithFormatVersion:(unsigned char)a0 optionsByReaderWriterClass:(id)a1 enumerationOptions:(id)a2 location:(id)a3 data:(id)a4 error:(id *)a5;
- (id)initWriterWithAtomLocation:(id)a0;
- (id)initWriterWithAtomLocation:(id)a0 version:(unsigned char)a1;
- (id)descriptionWithAtomValueParser:(id /* block */)a0;
- (void)enumerateAtomsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithAtomBatch:(id)a0 enumerationOptions:(id)a1 error:(id *)a2;
- (void)appendAtomWithBlock:(id /* block */)a0;

@end
