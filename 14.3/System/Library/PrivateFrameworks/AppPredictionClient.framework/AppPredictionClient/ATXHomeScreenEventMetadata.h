@class NSArray, NSDictionary, ATXCGRectWrapper, NSURL, NSNumber, NSMutableArray;

@interface ATXHomeScreenEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper> {
    NSMutableArray *_stackIds;
    NSMutableArray *_widgets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pageIndex;
@property (retain, nonatomic) NSDictionary *stacks;
@property (retain, nonatomic) NSArray *widgetsInStack;
@property (retain, nonatomic) NSNumber *isSuggestionInAddWidgetSheet;
@property (retain, nonatomic) NSNumber *isWidgetInTodayView;
@property (retain, nonatomic) ATXCGRectWrapper *visibleRect;
@property (retain, nonatomic) NSURL *engagedUrl;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPageIndex:(id)a0 stacks:(id)a1 widgetsInStack:(id)a2 isSuggestionInAddWidgetSheet:(id)a3 isWidgetInTodayView:(id)a4 visibleRect:(id)a5 engagedUrl:(id)a6;
- (BOOL)isEqualToATXHomeScreenEventMetadata:(id)a0;

@end
