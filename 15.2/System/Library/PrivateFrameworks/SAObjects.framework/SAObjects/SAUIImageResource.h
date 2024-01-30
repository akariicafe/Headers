@class NSData, NSURL, NSString;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) double pointHeight;
@property (nonatomic) double pointWidth;
@property (copy, nonatomic) NSURL *resourceUrl;
@property (nonatomic) double scaleFactor;
@property (copy, nonatomic) NSString *urlFormatString;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageResource;
+ (id)imageResourceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
