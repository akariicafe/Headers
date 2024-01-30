@class NSString, NSMutableString, NSUUID;

@interface PTPObjectInfoDataset : NSObject {
    unsigned long long _objectCompressedSize;
    NSMutableString *_keywords;
    NSUUID *_relatedUUID;
    long long _intervalSince1970;
}

@property (nonatomic) unsigned int objectHandle;
@property (nonatomic) unsigned int storageID;
@property (nonatomic) unsigned int parentObject;
@property (nonatomic) unsigned short associationType;
@property (nonatomic) unsigned int associationDesc;
@property (nonatomic) unsigned short objectFormat;
@property (nonatomic) unsigned short protectionStatus;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int thumbCompressedSize;
@property (nonatomic) unsigned short thumbFormat;
@property (nonatomic) unsigned int thumbOffset;
@property (nonatomic) unsigned int thumbPixWidth;
@property (nonatomic) unsigned int thumbPixHeight;
@property (nonatomic) unsigned int imagePixWidth;
@property (nonatomic) unsigned int imagePixHeight;
@property (nonatomic) unsigned int imageBitDepth;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *captureDate;
@property (copy, nonatomic) NSString *modificationDate;

- (id)initWithData:(id)a0 contentType:(int)a1;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithBytes:(char *)a0 length:(unsigned int)a1;
- (unsigned int)objectCompressedSize;
- (id)init;
- (id)keywords;
- (id)relatedUUID;
- (void)setObjectCompressedSize:(unsigned long long)a0;
- (void)dealloc;
- (id)content;
- (void)setKeywords:(id)a0;
- (id)content:(int)a0;
- (id)initWithBytes:(char *)a0 length:(unsigned int)a1 contentType:(int)a2;
- (BOOL)contentLengthValid:(unsigned int)a0 forContentType:(int)a1;
- (void)contentLength:(unsigned int *)a0 bufferLength:(unsigned int *)a1 contentType:(int)a2;
- (unsigned long long)objectCompressedSize64;
- (void)addCustomKeyword:(id)a0 withIdentifier:(id)a1;
- (unsigned int)objectContentSizeForContentType:(int)a0;
- (unsigned int)objectBufferSizeForContentType:(int)a0;
- (long long)intervalSince1970;

@end
