@class CKXDistributedTimestamp, CKXAtomLocation;

@interface CKXAtomReference : NSObject

@property (nonatomic) unsigned char type;
@property (retain, nonatomic) CKXAtomLocation *location;
@property (retain, nonatomic) CKXDistributedTimestamp *timestamp;

- (void).cxx_destruct;

@end
