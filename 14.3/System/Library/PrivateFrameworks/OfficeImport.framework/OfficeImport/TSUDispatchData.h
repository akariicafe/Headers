@class NSObject;
@protocol OS_dispatch_data;

@interface TSUDispatchData : NSObject {
    NSObject<OS_dispatch_data> *_data;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *fragmentedData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *defragmentedData;
@property (readonly, nonatomic) unsigned long long fragmentsCount;
@property (nonatomic) BOOL alwaysDefragmentData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;
@property (readonly, nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long maxFragmentsCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)append:(id)a0;
- (void)defragmentData;

@end
