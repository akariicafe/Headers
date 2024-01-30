@class NSString, EBReaderSheetState;

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
    EBReaderSheetState *mSheetState;
    unsigned int mSheetIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSheetIndex:(unsigned int)a0 state:(id)a1;
- (BOOL)loadDelayedNode:(id)a0;

@end
