@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (Class)bubbleClass;
- (Class)dataSourceClass;
- (Class)browserClass;
- (void)setDataSourceClass:(Class)a0;
- (void)setBubbleClass:(Class)a0;
- (void)setBrowserClass:(Class)a0;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)_loadBundle;
- (void)_loadAppBundle;

@end
