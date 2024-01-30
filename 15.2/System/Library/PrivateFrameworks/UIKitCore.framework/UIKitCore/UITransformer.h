@class NSString, NSMutableArray;

@interface UITransformer : UITransform <BSDescriptionProviding, NSMutableCopying> {
    NSMutableArray *_transformReasonAssociations;
}

@property (readonly, copy, nonatomic) NSMutableArray *transforms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithTransformer:(id)a0;

@end
