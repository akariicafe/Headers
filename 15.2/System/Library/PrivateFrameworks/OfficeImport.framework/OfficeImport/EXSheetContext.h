@class NSString, NSURL, EXReadState;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)loadDelayedNode:(id)a0;
- (id)initWithSheetLocation:(id)a0 sheetXmlType:(id)a1 state:(id)a2;

@end
