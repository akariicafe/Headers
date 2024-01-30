@class NSArray, NSString;

@interface TSWPTextHighlightRenderingDelegate : NSObject <TSWPAdornmentLineRenderingDelegate>

@property (readonly, nonatomic) NSArray *highlights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
