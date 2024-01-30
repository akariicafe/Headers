@class NSMutableData;

@interface _MLNetworkPacket : NSObject

@property (retain, nonatomic) NSMutableData *buffer;
@property (retain, nonatomic) NSMutableData *doubleBuffer;
@property (nonatomic) unsigned long long sizeOfPacket;
@property (nonatomic) unsigned long long command;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)cleanupDoubleBuffer;
- (void)resetMetadata;
- (void)resetDoubleBuffer;

@end
