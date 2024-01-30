@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSData *screenshotData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
