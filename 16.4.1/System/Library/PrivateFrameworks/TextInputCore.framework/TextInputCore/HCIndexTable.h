@class NSData, NSUUID;

@interface HCIndexTable : NSObject {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _mutableHuffmanCodes;
    NSUUID *_versionUUID;
    struct HCIndexTableFileHeader { unsigned int x0; unsigned short x1; unsigned char x2[16]; } *_fileHeader;
}

@property (readonly, nonatomic) NSData *huffmanCodesMemoryMappedData;
@property (readonly, nonatomic) const unsigned long long *huffmanCodes;
@property (readonly, nonatomic) const struct HCIndexTableFileHeader { unsigned int x0; unsigned short x1; unsigned char x2[16]; } *fileHeader;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) NSUUID *versionUUID;

+ (id)indexTableFromFile:(id)a0;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)a0;
- (id)codeAtIndex:(unsigned long long)a0;
- (id)initWithHuffmanCodesMemoryMappedData:(id)a0;

@end
