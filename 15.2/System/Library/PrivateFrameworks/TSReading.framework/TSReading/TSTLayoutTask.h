@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject {
    TSTMasterLayout *mMasterLayout;
}

@property (retain, nonatomic) NSMutableArray *cellStatesToLayout;

- (void)dealloc;
- (id)initWithMasterLayout:(id)a0;
- (void)flushToGlobalCaches;

@end
