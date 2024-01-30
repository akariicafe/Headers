@class TSDWrapSegments;

@interface TSCHTextWithInteriorWrapping : TSWPText {
    TSDWrapSegments *_cachedInteriorWrapSegments;
}

- (void).cxx_destruct;
- (int)verticalAlignment;
- (BOOL)shrinkTextToFit;
- (id)textWrapper;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;

@end
