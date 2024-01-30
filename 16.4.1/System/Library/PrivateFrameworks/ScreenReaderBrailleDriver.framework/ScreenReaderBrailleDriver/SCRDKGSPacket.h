@class NSData;

@interface SCRDKGSPacket : NSObject

@property (nonatomic) unsigned char command;
@property (nonatomic) unsigned char subCommand;
@property (retain, nonatomic) NSData *data;

- (void).cxx_destruct;

@end
