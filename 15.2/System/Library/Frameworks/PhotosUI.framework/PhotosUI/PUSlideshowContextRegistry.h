@class NSArray, NSMutableArray;
@protocol PUSlideshowDisplayContext;

@interface PUSlideshowContextRegistry : NSObject

@property (retain, nonatomic, setter=_setDisplayContexts:) NSMutableArray *_displayContexts;
@property (readonly, nonatomic) id<PUSlideshowDisplayContext> currentDisplayContext;
@property (readonly, copy, nonatomic) NSArray *displayContexts;

- (void).cxx_destruct;
- (id)init;
- (BOOL)addDisplayContext:(id)a0;
- (BOOL)removeDisplayContext:(id)a0;

@end
