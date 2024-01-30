@class NSString, MFIMAPFetchResult;
@protocol MFDataConsumer;

@interface _MFIMAPFetchUnit : NSObject {
    MFIMAPFetchResult *_expectedFetchResult;
}

@property (retain, nonatomic) id<MFDataConsumer> bodyDataConsumer;
@property (retain, nonatomic) NSString *consumerSection;
@property (copy, nonatomic) NSString *fetchItem;
@property (nonatomic) unsigned int uid;

- (void).cxx_destruct;
- (BOOL)matchesFetchResponse:(id)a0;
- (id)copyFailedFetchResponse;
- (void)_setupExpectedFetchResult;

@end
