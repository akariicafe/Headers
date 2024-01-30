@class NSString;

@interface HFDashboardStaticSectionListItem : HFStaticItem <HFReorderableItemListItemProtocol> {
    void /* unknown type, empty encoding */ uuidString;
    void /* unknown type, empty encoding */ sectionType;
}

@property (nonatomic, copy) NSString *uuidString;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultsBlock:(id /* block */)a0;

@end
