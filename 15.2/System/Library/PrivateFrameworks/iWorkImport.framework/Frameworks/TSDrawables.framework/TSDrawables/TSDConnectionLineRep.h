@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}

- (void).cxx_destruct;
- (void)updateFromLayout;
- (id)connectionLineLayout;
- (BOOL)shouldSetPathSourceWhenChangingInfoGeometry;

@end
