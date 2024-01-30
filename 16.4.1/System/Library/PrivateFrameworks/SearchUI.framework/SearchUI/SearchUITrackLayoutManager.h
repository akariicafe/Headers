@class TLKGridLayoutManager, NSMapTable;

@interface SearchUITrackLayoutManager : NSObject

@property (retain, nonatomic) TLKGridLayoutManager *layoutManager;
@property (retain, nonatomic) NSMapTable *tableMapping;

+ (id)singleLineTextWithString:(id)a0 highlighted:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithTrackCardSection:(id)a0;
- (id)tableRowForTrack:(id)a0;

@end
