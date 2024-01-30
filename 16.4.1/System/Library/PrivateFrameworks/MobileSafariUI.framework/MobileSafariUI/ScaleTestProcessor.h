@interface ScaleTestProcessor : PurplePageLoadTestRunner {
    float _scale;
}

- (void)setZoomScale:(float)a0;
- (void)doneRendering:(id)a0;
- (BOOL)startPageAction:(id)a0;

@end
