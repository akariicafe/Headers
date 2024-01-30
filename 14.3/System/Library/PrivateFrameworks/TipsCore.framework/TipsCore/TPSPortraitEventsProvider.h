@class TPSPortraitDataProvider;

@interface TPSPortraitEventsProvider : TPSEventsProvider {
    TPSPortraitDataProvider *_portraitDataProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPortraitDataProvider:(id)a0;
- (void)queryEvents:(id)a0;

@end
