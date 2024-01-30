@class HAPFragmentationStream, NSString, NSDate, HMFMessage;

@interface HMDFragmentationStreamTuple : HMFObject

@property (readonly, nonatomic) HAPFragmentationStream *fragmentationStream;
@property (readonly, nonatomic) NSString *objectUUID;
@property (retain, nonatomic) HMFMessage *lastMessage;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

+ (id)tupleWithFragmentationStreamForObject:(id)a0 delegate:(id)a1;

- (void)close;
- (void).cxx_destruct;
- (id)initWithFragmentationStreamForObject:(id)a0 delegate:(id)a1;

@end
