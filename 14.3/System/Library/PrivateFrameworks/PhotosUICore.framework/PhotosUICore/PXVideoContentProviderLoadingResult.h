@class NSError, AVPlayerItem, NSString;

@interface PXVideoContentProviderLoadingResult : NSObject

@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *resultDebugDescription;

- (void).cxx_destruct;
- (id)initWithPlayerItem:(id)a0 error:(id)a1 priority:(long long)a2 description:(id)a3;
- (id)description;

@end
