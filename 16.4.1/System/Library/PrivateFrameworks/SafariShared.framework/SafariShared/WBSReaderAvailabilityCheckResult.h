@class NSArray, NSURL;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isReaderAvailable) BOOL readerAvailable;
@property (nonatomic) BOOL isSameDocumentNavigation;
@property (copy, nonatomic) NSArray *textSamples;
@property (nonatomic) BOOL doesPageUseSearchEngineOptimizationMetadata;
@property (copy, nonatomic) NSURL *canonicalURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
