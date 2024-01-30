@class NSMutableArray;

@interface CPDocument : NSObject {
    NSMutableArray *pages;
}

- (void)addPage:(id)a0;
- (id)init;
- (void)dealloc;

@end
