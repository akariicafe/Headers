@class NSString, NSArray;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    NSArray *_colors;
}

@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) long long style;
@property (readonly, nonatomic) NSString *configurationDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (id)init;
- (void)referenceSizeDidChange;

@end
