@class NSString;

@interface SBSceneSnapshotRequest : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) unsigned long long userInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithSize:(unsigned long long)a0 orientation:(unsigned long long)a1 userInterfaceStyle:(unsigned long long)a2;

@end
