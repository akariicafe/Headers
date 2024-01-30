@class NSArray, NSObject;
@protocol OS_os_log;

@interface PXStoryDefaultStylesProducer : NSObject <PXStoryStylesProducer> {
    NSObject<OS_os_log> *_log;
}

@property (readonly, copy, nonatomic) NSArray *autoEditDecisionLists;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAutoEditDecisionLists:(id)a0;
- (id)requestStylesWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
