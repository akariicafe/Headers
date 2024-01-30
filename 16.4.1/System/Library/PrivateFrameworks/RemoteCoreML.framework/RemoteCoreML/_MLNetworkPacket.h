@class NSMutableData;

@interface _MLNetworkPacket : NSObject

@property (retain, nonatomic) NSMutableData *buffer;
@property (retain, nonatomic) NSMutableData *doubleBuffer;
@property (nonatomic) unsigned long long sizeOfPacket;
@property (nonatomic) unsigned long long command;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)cleanupDoubleBuffer;
- (void)resetDoubleBuffer;
- (void)resetMetadata;

@end
