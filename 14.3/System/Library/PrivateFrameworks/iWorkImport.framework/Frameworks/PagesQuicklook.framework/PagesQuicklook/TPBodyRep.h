@class TPBodyLayout, NSSet;

@interface TPBodyRep : TSWPRep {
    NSSet *_lastSelectedInfos;
}

@property (readonly, nonatomic) TPBodyLayout *bodyLayout;

- (void).cxx_destruct;
- (id)storage;

@end
