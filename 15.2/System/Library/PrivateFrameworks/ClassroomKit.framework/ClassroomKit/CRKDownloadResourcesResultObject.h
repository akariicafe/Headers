@class NSArray;

@interface CRKDownloadResourcesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *resourceFileURLs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
