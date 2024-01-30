@class HDHealthServiceCharacteristic;

@interface _HDHealthServiceWriteOperation : NSObject

@property (retain, nonatomic) HDHealthServiceCharacteristic *characteristic;
@property (nonatomic) BOOL expectResponse;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
