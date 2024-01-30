@class NSString, _ACCNowPlayingPBQUpdateRequest, NSObject;
@protocol OS_dispatch_queue;

@interface _ACCNowPlayingPBQUpdateRequestAccessory : NSObject

@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *currentRequestID;
@property (retain, nonatomic) _ACCNowPlayingPBQUpdateRequest *currentRequest;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccessoryUID:(id)a0;

@end
