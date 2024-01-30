@class NSArray, NSDictionary, ATXCGRectWrapper, NSURL, NSNumber, NSMutableArray;

@interface ATXHomeScreenEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    NSMutableArray *_stackIds;
    NSMutableArray *_widgets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pageIndex;
@property (nonatomic) long long suggestedPageType;
@property (retain, nonatomic) NSDictionary *stacks;
@property (retain, nonatomic) NSArray *widgetsInStack;
@property (retain, nonatomic) NSArray *bundleIds;
@property (retain, nonatomic) NSNumber *isSuggestionInAddWidgetSheet;
@property (retain, nonatomic) NSNumber *isWidgetInTodayView;
@property (retain, nonatomic) ATXCGRectWrapper *visibleRect;
@property (retain, nonatomic) NSURL *engagedUrl;
@property (retain, nonatomic) NSNumber *isStalenessRotation;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPageIndex:(id)a0 suggestedPageType:(long long)a1 stacks:(id)a2 widgetsInStack:(id)a3 isSuggestionInAddWidgetSheet:(id)a4 isWidgetInTodayView:(id)a5 visibleRect:(id)a6 engagedUrl:(id)a7;
- (void).cxx_destruct;
- (BOOL)isEqualToATXHomeScreenEventMetadata:(id)a0;

@end
