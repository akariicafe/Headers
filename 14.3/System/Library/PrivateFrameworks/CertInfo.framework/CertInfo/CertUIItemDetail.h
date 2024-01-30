@class NSString, UIColor;

@interface CertUIItemDetail : NSObject

@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) UIColor *detailHighlightColor;
@property (nonatomic) BOOL showCheckmarkView;
@property (retain, nonatomic) NSString *checkmarkText;
@property (retain, nonatomic) UIColor *checkmarkHighlightColor;
@property (nonatomic) BOOL showCheckmark;

+ (id)itemDetailWithDetailTitle:(id)a0 detail:(id)a1;
+ (id)itemDetailWithDetailTitle:(id)a0 detail:(id)a1 detailHighlightColor:(id)a2;
+ (id)itemDetailWithDetailTitle:(id)a0 detail:(id)a1 detailHighlightColor:(id)a2 showCheckmarkView:(BOOL)a3 checkmarkText:(id)a4 checkmarkHighlightColor:(id)a5 showCheckmark:(BOOL)a6;

- (void).cxx_destruct;
- (id)initWithDetailTitle:(id)a0 detail:(id)a1 detailHighlightColor:(id)a2 showCheckmarkView:(BOOL)a3 checkmarkText:(id)a4 checkmarkHighlightColor:(id)a5 showCheckmark:(BOOL)a6;

@end
