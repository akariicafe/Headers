@interface PodcastsFoundation.BaseFeedResponse : NSObject <MTMAPIResponse> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ parsedCache;
}

- (id)sectionAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)init;
- (void).cxx_destruct;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
