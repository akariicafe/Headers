@class TSDDisplayLink, NSMutableArray;

@interface TSDDisplayLinkDispatch : NSObject {
    TSDDisplayLink *_displayLink;
    NSMutableArray *_blocks;
}

- (void)teardown;
- (void)performBlockNextFrame:(id /* block */)a0;

@end
