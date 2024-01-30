@class BKSMousePointerGlobalContextOptions;

@interface BKSMutableMousePointerEventGlobalRoute : BKSMousePointerEventGlobalRoute

@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) BKSMousePointerGlobalContextOptions *options;

- (void)setContextID:(unsigned int)a0;
- (void)setOptions:(id)a0;

@end
