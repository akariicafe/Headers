@class NSData;

@interface CRKFetchScreenshotResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *screenshotData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
