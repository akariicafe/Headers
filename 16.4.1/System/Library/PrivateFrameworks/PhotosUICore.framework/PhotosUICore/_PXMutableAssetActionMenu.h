@class NSArray, NSMutableArray, NSString;

@interface _PXMutableAssetActionMenu : NSObject <PXMutableAssetActionMenu>

@property (readonly, nonatomic) NSMutableArray *destructiveElements;
@property (copy, nonatomic) NSArray *excludedActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addDestructiveElement:(id)a0;

@end
