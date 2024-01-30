@class MPModelPlayEvent, MPModelGenericObject;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying>

@property (nonatomic) BOOL allowsStoreContainerImport;
@property (retain, nonatomic) MPModelPlayEvent *playEvent;
@property (retain, nonatomic) MPModelGenericObject *itemGenericObject;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
