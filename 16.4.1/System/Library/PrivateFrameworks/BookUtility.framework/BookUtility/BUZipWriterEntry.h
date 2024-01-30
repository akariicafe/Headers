@class NSString, NSDate;

@interface BUZipWriterEntry : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int CRC;

- (void).cxx_destruct;

@end
