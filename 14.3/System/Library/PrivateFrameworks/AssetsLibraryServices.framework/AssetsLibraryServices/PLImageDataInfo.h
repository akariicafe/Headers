@class NSURL, NSString;

@interface PLImageDataInfo : NSObject

@property long long deliveredFormat;
@property BOOL deliveredPlaceholder;
@property BOOL canDownloadFromCloud;
@property (retain) NSURL *URL;
@property (retain) NSString *sandboxExtensionToken;
@property (retain) NSString *UTI;
@property long long EXIFOrientation;

- (void).cxx_destruct;
- (id)description;

@end
