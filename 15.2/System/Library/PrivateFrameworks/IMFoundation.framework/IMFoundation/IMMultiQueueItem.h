@class NSString;

@interface IMMultiQueueItem : NSObject

@property (readonly, nonatomic) id block;
@property (readonly, nonatomic) NSString *GUID;
@property (readonly, nonatomic) NSString *describer;

- (void).cxx_destruct;
- (id)initWithBlock:(id)a0 GUID:(id)a1 description:(id)a2;

@end
