@class NSString, BSMutableSettings, NSMutableSet;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding> {
    BSMutableSettings *_changes;
    NSMutableSet *_flagRemovals;
    NSMutableSet *_objectRemovals;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEmpty;
@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)inspectChangesWithBlock:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)applyToSettings:(id)a0;

@end
