@class NSString;

@interface MSObjectInfoDataset : NSObject {
    unsigned short _objectFormat;
    unsigned short _protectionStatus;
    unsigned long long _objectCompressedSize;
    unsigned short _thumbFormat;
    unsigned int _thumbCompressedSize;
    unsigned int _thumbOffset;
    unsigned int _thumbPixWidth;
    unsigned int _thumbPixHeight;
    unsigned int _imagePixWidth;
    unsigned int _imagePixHeight;
    unsigned int _imageBitDepth;
    unsigned int _parentObject;
    unsigned short _associationType;
    unsigned int _objectHandle;
    unsigned short _imageOrientation;
    unsigned long long _captureDate_tvsec;
    unsigned long long _modificationDate_tvsec;
    NSString *_filename;
}

- (void)setFilename:(id)a0;
- (id)filename;
- (id)initWithData:(id)a0;
- (void)setParentObject:(unsigned int)a0;
- (id)initWithBytes:(char *)a0 length:(unsigned int)a1;
- (unsigned long long)objectCompressedSize;
- (unsigned int)thumbOffset;
- (unsigned int)thumbCompressedSize;
- (id)init;
- (void)setObjectCompressedSize:(unsigned long long)a0;
- (void)setThumbOffset:(unsigned int)a0;
- (void)dealloc;
- (void)setThumbCompressedSize:(unsigned int)a0;
- (id)content;
- (void)contentLength:(unsigned int *)a0 bufferLength:(unsigned int *)a1;
- (unsigned short)objectFormat;
- (void)setObjectFormat:(unsigned short)a0;
- (unsigned short)protectionStatus;
- (void)setProtectionStatus:(unsigned short)a0;
- (unsigned short)thumbFormat;
- (void)setThumbFormat:(unsigned short)a0;
- (unsigned int)thumbPixWidth;
- (void)setThumbPixWidth:(unsigned int)a0;
- (unsigned int)thumbPixHeight;
- (void)setThumbPixHeight:(unsigned int)a0;
- (unsigned int)imagePixWidth;
- (void)setImagePixWidth:(unsigned int)a0;
- (unsigned int)imagePixHeight;
- (void)setImagePixHeight:(unsigned int)a0;
- (unsigned int)imageBitDepth;
- (void)setImageBitDepth:(unsigned int)a0;
- (unsigned int)parentObject;
- (unsigned short)associationType;
- (void)setAssociationType:(unsigned short)a0;
- (unsigned long long)captureDate_tvsec;
- (void)setCaptureDate_tvsec:(unsigned long long)a0;
- (void)setImageOrietation:(unsigned short)a0;
- (unsigned short)imageOrietation;
- (unsigned long long)modificationDate_tvsec;
- (void)setModificationDate_tvsec:(unsigned long long)a0;
- (unsigned int)objectHandle;
- (void)setObjectHandle:(unsigned int)a0;

@end
