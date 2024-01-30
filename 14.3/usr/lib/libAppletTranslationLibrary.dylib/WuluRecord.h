@class NSData;

@interface WuluRecord : NSObject

@property (nonatomic) unsigned char sfi;
@property (nonatomic) unsigned char number;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned short associatedSerialNumber;

+ (id)withRecordSfi:(unsigned char)a0 recordNumber:(unsigned char)a1 recordData:(id)a2 associatedSerialNumber:(unsigned short)a3;

- (void).cxx_destruct;

@end
