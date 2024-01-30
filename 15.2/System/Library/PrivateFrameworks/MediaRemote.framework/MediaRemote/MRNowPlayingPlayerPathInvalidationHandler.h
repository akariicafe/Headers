@class MRPlayerPath, NSObject;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ callback;

- (id)initWithPlayerPath:(id)a0 queue:(id)a1 invalidationCallback:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;

@end
