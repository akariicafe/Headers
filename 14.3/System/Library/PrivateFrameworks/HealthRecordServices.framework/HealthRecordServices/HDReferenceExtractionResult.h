@class NSArray, NSURL;

@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *completeResources;
@property (readonly, copy, nonatomic) NSArray *incompleteResources;
@property (readonly, copy, nonatomic) NSArray *unresolvableReferences;
@property (readonly, copy, nonatomic) NSURL *nextSearchResultURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCompleteResources:(id)a0 incompleteResources:(id)a1 unresolvableReferences:(id)a2 nextSearchResultURL:(id)a3;

@end
