@class NSMutableArray;

@interface CPDocument : NSObject {
    NSMutableArray *pages;
}

- (void)addPage:(id)a0;
- (void)dealloc;
- (id)init;

@end
