@class NSString, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer>

@property (nonatomic, getter=isSerialAppend) BOOL serialAppend;
@property (readonly, nonatomic) NSMutableArray *consumers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterWithConsumer:(id)a0;
+ (id)filterWithConsumers:(id)a0;

- (void).cxx_destruct;
- (id)initWithConsumer:(id)a0;
- (long long)appendData:(id)a0;
- (void)done;
- (id)initWithConsumers:(id)a0;

@end
