@class NSString;

@interface SBHIconGridPath : NSObject <BSDescriptionProviding, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *folderIdentifier;
@property (readonly, copy, nonatomic) NSString *listIdentifier;
@property (readonly, nonatomic) unsigned long long gridCellIndex;
@property (readonly, nonatomic) unsigned long long gridCellInfoOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFolderIdentifier:(id)a0 listIdentifier:(id)a1 gridCellIndex:(unsigned long long)a2 gridCellInfoOptions:(unsigned long long)a3;
- (id)succinctDescription;
- (id)iconGridPathWithGridCellIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)iconGridPathWithListIdentifier:(id)a0 gridCellIndex:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
