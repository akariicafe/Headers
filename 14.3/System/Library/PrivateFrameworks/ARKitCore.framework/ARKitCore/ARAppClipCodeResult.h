@class NSURL;

@interface ARAppClipCodeResult : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } codeToWorldVisionTransform;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL isScaleReliable;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long urlDecodingStateInternal;
@property (nonatomic) unsigned long long urlEncodingVersion;

- (void).cxx_destruct;

@end
