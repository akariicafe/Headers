@class NSMutableArray;

@interface CPDocument : NSObject {
    NSMutableArray *pages;
}

- (id)init;
- (void)dealloc;
- (void)addPage:(id)a0;

@end
