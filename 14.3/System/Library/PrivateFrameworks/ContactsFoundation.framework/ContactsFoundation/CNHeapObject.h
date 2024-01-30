@class NSString;

@interface CNHeapObject : NSObject

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *binary;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long bytes;

- (void).cxx_destruct;
- (id)classAndBinaryKey;
- (id)description;

@end
