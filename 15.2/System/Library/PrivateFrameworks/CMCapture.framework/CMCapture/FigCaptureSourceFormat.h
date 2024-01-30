@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding> {
    NSDictionary *_formatDictionary;
    struct opaqueCMFormatDescription { } *_formatDescription;
    struct { int width; int height; } _previewDimensions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly) unsigned int format;
@property (readonly, getter=isDefaultActiveFormat) BOOL defaultActiveFormat;
@property (readonly, getter=isExperimental) BOOL experimental;
@property (readonly) NSDictionary *formatDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0;
- (void)dealloc;

@end
