@class NSString, NSDate;

@interface TSUZipEntry : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collapsedName;
@property (nonatomic, getter=isCompressed) BOOL compressed;
@property (copy, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long long fileHeaderLength;

- (void).cxx_destruct;
- (id)description;

@end
