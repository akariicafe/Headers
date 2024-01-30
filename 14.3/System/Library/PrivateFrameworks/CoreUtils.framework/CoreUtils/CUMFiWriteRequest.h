@class NSData;

@interface CUMFiWriteRequest : NSObject {
    CUMFiWriteRequest *next;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
