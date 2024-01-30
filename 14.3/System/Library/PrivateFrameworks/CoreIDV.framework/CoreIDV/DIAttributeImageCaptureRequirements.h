@class NSNumber, NSString, NSArray;

@interface DIAttributeImageCaptureRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long selection;
@property (nonatomic) unsigned long long minHeight;
@property (nonatomic) unsigned long long minWidth;
@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) unsigned long long preferredWidth;
@property (nonatomic) unsigned long long ratioHeight;
@property (nonatomic) unsigned long long ratioWidth;
@property (nonatomic) unsigned long long minBorderPadding;
@property (retain, nonatomic) NSNumber *compressionRatio;
@property (retain, nonatomic) NSNumber *maximumCompressionRatio;
@property (copy, nonatomic) NSString *userMessage;
@property (copy, nonatomic) NSArray *supportedEncoding;
@property (nonatomic) BOOL liveliness;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) unsigned long long maxRetakeCount;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
