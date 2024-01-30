@protocol NSCopying;

@interface UIWKDocumentRequest : NSObject

@property (nonatomic) long long flags;
@property (nonatomic) long long surroundingGranularity;
@property (nonatomic) long long granularityCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } documentRect;
@property (retain, nonatomic) id<NSCopying> inputElementIdentifier;

- (void)dealloc;

@end
