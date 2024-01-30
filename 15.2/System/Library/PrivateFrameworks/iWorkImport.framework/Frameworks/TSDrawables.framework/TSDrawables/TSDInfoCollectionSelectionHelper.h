@class NSSet, NSString;

@interface TSDInfoCollectionSelectionHelper : NSObject

@property (readonly, nonatomic) NSSet *modelInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSString *UUIDDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithInteractiveInfos:(id)a0 nonInteractiveInfos:(id)a1;
- (id)initWithInteractiveInfos:(id)a0;

@end
