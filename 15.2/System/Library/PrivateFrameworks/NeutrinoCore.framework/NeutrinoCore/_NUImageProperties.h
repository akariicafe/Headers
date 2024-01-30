@class NSURL, NSDictionary, NSString;
@protocol NURAWImageProperties;

@interface _NUImageProperties : NSObject <NUImageProperties>

@property (retain) NSURL *url;
@property (retain) NSDictionary *metadata;
@property (retain, nonatomic) struct CGColorSpace { } *colorSpace;
@property struct { long long width; long long height; } size;
@property long long orientation;
@property (retain) NSString *fileUTI;
@property long long alphaInfo;
@property long long componentInfo;
@property BOOL isFusedOvercapture;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property (retain) id<NURAWImageProperties> rawProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
