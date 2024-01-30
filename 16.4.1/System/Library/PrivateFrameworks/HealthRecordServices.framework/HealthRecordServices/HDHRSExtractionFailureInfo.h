@class NSArray, NSMutableArray;

@interface HDHRSExtractionFailureInfo : NSObject <NSSecureCoding> {
    NSMutableArray *_failureRecords;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *failureRecords;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addFailureRecord:(id)a0;

@end
