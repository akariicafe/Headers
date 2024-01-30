@class NSUUID;
@protocol BNPending;

@interface _BNPenderQueueEntry : NSObject

@property (readonly, nonatomic) id<BNPending> pender;
@property (readonly, nonatomic) NSUUID *entryIdentifier;

- (void).cxx_destruct;
- (id)initWithPender:(id)a0;

@end
