@class NSArray;

@interface SidecarTransferGroup : NSObject {
    long long _completedItems;
    NSArray *_mutableItems;
    long long _type;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long type;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)handleMessage:(id)a0 error:(id *)a1;

@end
