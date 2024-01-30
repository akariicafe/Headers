@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
