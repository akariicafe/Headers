@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL shouldInterleaveClientResults;
@property (readonly, nonatomic) BOOL enforceServerResultsOrder;
@property (readonly, nonatomic) BOOL enableMapsSuggestServerReranking;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0 title:(id)a1 shouldInterleaveClientResults:(BOOL)a2 enforceServerResultsOrder:(BOOL)a3 enableMapsSuggestServerReranking:(BOOL)a4;

@end
