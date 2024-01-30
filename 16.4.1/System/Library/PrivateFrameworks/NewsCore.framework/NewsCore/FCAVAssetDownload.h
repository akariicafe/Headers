@class NSString, NSMutableArray;
@protocol FCOperationCanceling, FCOperationIdentifying;

@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying> {
    NSString *_assetID;
    id<FCOperationCanceling, FCOperationIdentifying> _underlyingOperation;
    NSMutableArray *_completionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *shortOperationDescription;
@property (readonly, nonatomic) NSString *longOperationDescription;

- (void)cancel;
- (void).cxx_destruct;

@end
