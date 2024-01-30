@class NSString, NSMutableArray;
@protocol FCOperationCanceling, FCOperationIdentifying;

@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying>

@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, nonatomic) id<FCOperationCanceling, FCOperationIdentifying> underlyingOperation;
@property (readonly, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithAssetID:(id)a0 underlyingOperation:(id)a1;
- (id)longOperationDescription;
- (id)shortOperationDescription;

@end
