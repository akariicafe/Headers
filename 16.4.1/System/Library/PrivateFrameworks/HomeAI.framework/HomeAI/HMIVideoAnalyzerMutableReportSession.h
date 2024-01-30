@class NSString, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *source;
@property (readonly) NSMutableArray *fragments;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (void)appendFragmentResult:(id)a0 redactFrames:(BOOL)a1;

@end
