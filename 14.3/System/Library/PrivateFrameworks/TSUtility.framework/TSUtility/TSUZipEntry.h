@class NSString;

@interface TSUZipEntry : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isCompressed) BOOL compressed;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned short extraFieldLength;

- (void).cxx_destruct;
- (id)description;

@end
