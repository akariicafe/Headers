@class NSData;

@interface AtlasRecordData : NSObject

@property unsigned char sfi;
@property unsigned char recordId;
@property (retain) NSData *content;

- (id)description;
- (void).cxx_destruct;

@end
