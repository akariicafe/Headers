@class NSString;

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>

@property (nonatomic) BOOL includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (id)initWithCoder:(id)a0;
- (id)initWithIncludeDisabledContainers:(BOOL)a0;

@end
