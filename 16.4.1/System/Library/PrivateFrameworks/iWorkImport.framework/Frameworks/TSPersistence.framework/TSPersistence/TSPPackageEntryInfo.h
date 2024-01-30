@class NSDate;

@interface TSPPackageEntryInfo : NSObject

@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly, nonatomic) unsigned int CRC;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEncodedLength:(unsigned long long)a0 lastModificationDate:(id)a1 CRC:(unsigned int)a2;

@end
