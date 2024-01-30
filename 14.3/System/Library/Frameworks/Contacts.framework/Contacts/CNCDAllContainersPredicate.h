@class NSString;

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>

@property (nonatomic) BOOL includeDisabledContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithIncludeDisabledContainers:(BOOL)a0;
- (id)cn_coreDataPredicate;
- (id)cn_topLevelFilter;
- (id)cn_persistenceFilterRequest;
- (void)encodeWithCoder:(id)a0;

@end
