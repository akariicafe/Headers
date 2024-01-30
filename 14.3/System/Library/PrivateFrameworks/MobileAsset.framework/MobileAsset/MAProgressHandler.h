@class NSMutableArray;

@interface MAProgressHandler : NSObject

@property (nonatomic) unsigned long long notificationInterval;
@property (readonly, nonatomic) NSMutableArray *callBackArray;

- (void)dealloc;
- (void)addCallBack:(id /* block */)a0;
- (id)initWithCallBack:(id /* block */)a0;

@end
