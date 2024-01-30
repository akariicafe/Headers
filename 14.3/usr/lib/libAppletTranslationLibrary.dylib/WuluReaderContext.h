@class WuluRecord, NSData, NSMutableArray, NSNumber;

@interface WuluReaderContext : NSObject

@property (retain, nonatomic) NSData *file15;
@property (retain, nonatomic) NSData *file17;
@property (retain, nonatomic) NSMutableArray *file18;
@property (retain, nonatomic) NSMutableArray *file1E;
@property (retain, nonatomic) NSMutableArray *file1A;
@property (retain, nonatomic) NSNumber *balance;
@property (retain, nonatomic) WuluRecord *localRecord;

+ (id)readAllFiles:(id)a0 debug:(BOOL)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)readAll:(id)a0 debug:(BOOL)a1 error:(id *)a2;
- (id)readBalance:(id)a0 error:(id *)a1;
- (id)readBinary:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
- (id)readRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 error:(id *)a3;
- (id)readExtendedRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 error:(id *)a3;
- (void)readAdditionalFile:(id)a0 cityCode:(id)a1;
- (void)dumpAllFiles;

@end
