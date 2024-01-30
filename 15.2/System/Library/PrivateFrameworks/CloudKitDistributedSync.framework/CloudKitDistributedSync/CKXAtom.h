@class CKXDistributedTimestamp, NSArray, NSData, CKXAtomLocation;

@interface CKXAtom : NSObject

@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) CKXAtomLocation *location;
@property (retain, nonatomic) CKXDistributedTimestamp *timestamp;
@property (retain, nonatomic) NSArray *references;
@property (nonatomic) unsigned char atomBehavior;
@property (nonatomic) unsigned long long atomType;
@property (retain, nonatomic) NSData *value;

- (void).cxx_destruct;

@end
