@class NAPromise, NSDate;

@interface HFCHIPExtensionRequestStorageTuple : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NAPromise *promise;

- (void).cxx_destruct;
- (id)initWithPromise:(id)a0;
- (id)initWithPromise:(id)a0 startDate:(id)a1;

@end
