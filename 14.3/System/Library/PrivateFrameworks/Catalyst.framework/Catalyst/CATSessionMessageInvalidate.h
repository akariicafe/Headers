@class NSError;

@interface CATSessionMessageInvalidate : CATSessionMessage

@property (copy, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
