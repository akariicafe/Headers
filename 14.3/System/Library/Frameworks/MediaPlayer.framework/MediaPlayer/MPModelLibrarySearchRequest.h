@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
