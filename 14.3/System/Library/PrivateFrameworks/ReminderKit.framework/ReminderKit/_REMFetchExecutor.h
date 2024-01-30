@interface _REMFetchExecutor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)resultsFromFetchResult:(id)a0 inStore:(id)a1 error:(id *)a2;
- (id)metadataFromFetchResult:(id)a0 inStore:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;

@end
