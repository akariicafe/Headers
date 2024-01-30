@class NSString;

@interface PFZipEndOfCentralDirectoryRecord : NSObject {
    unsigned short _numberOfDisk;
    unsigned short _diskWhereCentralDirectoryStarts;
    unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
    unsigned short _totalNumberOfCentralDirectoryRecords;
    unsigned int _byteSizeOfCentralDirectory;
    unsigned int _centralDirectoryOffset;
    unsigned short _commentLength;
    NSString *_comment;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end
