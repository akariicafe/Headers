@class NSURL, NSArray;

@interface MFFragmentedMessage : NSObject

@property (readonly, nonatomic) struct { long long globalMessageID; unsigned int uid; unsigned int messageSize; long long dateReceived; } uidAndSize;
@property (readonly, nonatomic) NSURL *mainFile;
@property (readonly, copy, nonatomic) NSArray *existingParts;

- (void).cxx_destruct;

@end
