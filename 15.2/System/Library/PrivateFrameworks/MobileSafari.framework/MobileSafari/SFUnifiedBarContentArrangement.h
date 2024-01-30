@class NSArray, UIView;
@protocol SFUnifiedBarContentView;

@interface SFUnifiedBarContentArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *allContentViews;
@property (readonly, nonatomic) UIView<SFUnifiedBarContentView> *inlineContentView;
@property (readonly, copy, nonatomic) NSArray *standaloneContentViews;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithInlineContentView:(id)a0 standaloneContentViews:(id)a1;

@end
