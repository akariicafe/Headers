@class NSArray, NSMutableArray;

@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding> {
    NSMutableArray *_failureRecords;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *failureRecords;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addFailureRecord:(id)a0;

@end
