@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject

@property (retain) CRCameraReaderOutputInternal *objectInternal;
@property (readonly) NSString *type;
@property (readonly) NSString *stringValue;
@property (readonly) NSString *formattedStringValue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithImageReaderOutput:(id)a0;

@end
