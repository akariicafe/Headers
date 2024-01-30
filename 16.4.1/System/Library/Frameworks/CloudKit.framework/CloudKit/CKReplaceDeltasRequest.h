@class CKMergeableValueID, NSArray, NSString;

@interface CKReplaceDeltasRequest : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKMergeableValueID *valueID;
@property (readonly, copy, nonatomic) NSArray *deltaIdentifiersToReplace;
@property (readonly, copy, nonatomic) NSArray *replacementDeltas;
@property (readonly, nonatomic) BOOL replacementDeltasContainNewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithValueID:(id)a0 deltaIdentifiersToReplace:(id)a1 replacementDeltas:(id)a2 replacementDeltasContainNewData:(BOOL)a3;

@end
