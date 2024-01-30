@class NSArray, NSString;

@interface AMSStreamHTTPArchiveEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSString *urlString;

+ (id)_createEntriesForTaskMetrics:(id)a0 requestData:(id)a1 responseData:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntries:(id)a0;
- (void).cxx_destruct;
- (id)initWithHTTPArchiveTaskInfo:(id)a0;

@end
