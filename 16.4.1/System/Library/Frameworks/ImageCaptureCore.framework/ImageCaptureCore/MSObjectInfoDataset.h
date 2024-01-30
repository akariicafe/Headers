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

- (id)initWithData:(id)a0;
- (void)setParentObject:(unsigned int)a0;
- (void)setFilename:(id)a0;
- (id)content;
- (id)filename;
- (id)initWithBytes:(char *)a0 length:(unsigned int)a1;
- (void)dealloc;
- (id)init;
- (void)setThumbOffset:(unsigned int)a0;
- (unsigned long long)objectCompressedSize;
- (void)setObjectCompressedSize:(unsigned long long)a0;
- (void)setThumbCompressedSize:(unsigned int)a0;
- (unsigned int)thumbCompressedSize;
- (unsigned int)thumbOffset;
- (unsigned short)associationType;
- (unsigned short)imageOrietation;
- (void)setThumbFormat:(unsigned short)a0;
- (unsigned long long)captureDate_tvsec;
- (void)contentLength:(unsigned int *)a0 bufferLength:(unsigned int *)a1;
- (unsigned int)imageBitDepth;
- (unsigned int)imagePixHeight;
- (unsigned int)imagePixWidth;
- (unsigned long long)modificationDate_tvsec;
- (unsigned short)objectFormat;
- (unsigned int)objectHandle;
- (unsigned int)parentObject;
- (unsigned short)protectionStatus;
- (void)setAssociationType:(unsigned short)a0;
- (void)setCaptureDate_tvsec:(unsigned long long)a0;
- (void)setImageBitDepth:(unsigned int)a0;
- (void)setImageOrietation:(unsigned short)a0;
- (void)setImagePixHeight:(unsigned int)a0;
- (void)setImagePixWidth:(unsigned int)a0;
- (void)setModificationDate_tvsec:(unsigned long long)a0;
- (void)setObjectFormat:(unsigned short)a0;
- (void)setObjectHandle:(unsigned int)a0;
- (void)setProtectionStatus:(unsigned short)a0;
- (void)setThumbPixHeight:(unsigned int)a0;
- (void)setThumbPixWidth:(unsigned int)a0;
- (unsigned short)thumbFormat;
- (unsigned int)thumbPixHeight;
- (unsigned int)thumbPixWidth;

@end
