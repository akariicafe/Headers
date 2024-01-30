@class NSString;

@interface WFScanChannel : NSObject <WFScanableChannel>

@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithChannel:(long long)a0 flags:(long long)a1;

@end
