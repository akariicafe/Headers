@class NSString, NSMutableArray;

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying> {
    NSMutableArray *_transformReasonAssociations;
}

@property (readonly, copy, nonatomic) NSMutableArray *transforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithTransformer:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
