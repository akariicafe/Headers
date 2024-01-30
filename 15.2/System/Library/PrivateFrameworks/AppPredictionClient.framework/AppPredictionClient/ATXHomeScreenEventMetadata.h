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
@property (retain, nonatomic) NSNumber *isStalenessRotation;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXHomeScreenEventMetadata:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithPageIndex:(id)a0 stacks:(id)a1 widgetsInStack:(id)a2 isSuggestionInAddWidgetSheet:(id)a3 isWidgetInTodayView:(id)a4 visibleRect:(id)a5 engagedUrl:(id)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)dictionaryRepresentation;

@end
