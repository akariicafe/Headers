@class CPLChangeBatch;

@interface CPLPullSessionScopesAcknowledgement : CPLChangeSessionUpdate

@property (readonly, nonatomic) CPLChangeBatch *scopesChangeBatch;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)statusDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (id)storageForStatusInStore:(id)a0;
- (id)initWithStore:(id)a0 scopesChangeBatch:(id)a1;

@end
