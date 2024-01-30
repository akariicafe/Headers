@class NSString;

@interface PXMessagesDebugTapbackStatusManager : NSObject <PXTapbackStatusManager>

@property (readonly, nonatomic) Class decorationViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasTapbacksForAsset:(id)a0;
- (id)tapbackUserDataForAsset:(id)a0 previousAsset:(id)a1;

@end
