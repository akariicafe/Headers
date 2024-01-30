@class UISSlotStyle, NSString;

@interface SLDEmptySlotContent : NSObject <UISSlotAnyContent>

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL isRemote;
@property (retain, nonatomic) UISSlotStyle *style;
@property (readonly, nonatomic) unsigned char contentScale;
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
