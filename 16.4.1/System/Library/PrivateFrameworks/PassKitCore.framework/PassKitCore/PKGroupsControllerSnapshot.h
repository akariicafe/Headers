@class NSSet, NSDictionary, PKCatalog;

@interface PKGroupsControllerSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *passes;
@property (readonly, nonatomic) NSDictionary *annotationsByPassUniqueID;
@property (readonly, nonatomic) PKCatalog *catalog;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPasses:(id)a0 annotationsByPassUniqueID:(id)a1 catalog:(id)a2;

@end
