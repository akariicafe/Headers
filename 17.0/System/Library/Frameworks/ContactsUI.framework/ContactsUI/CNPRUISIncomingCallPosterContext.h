@class PRUISIncomingCallPosterContext, NSString;

@interface CNPRUISIncomingCallPosterContext : NSObject

@property (readonly, copy, nonatomic) PRUISIncomingCallPosterContext *wrappedIncomingCallPosterContext;
@property (readonly, copy, nonatomic) NSString *titleString;
@property (readonly, copy, nonatomic) NSString *preferredTitleString;

+ (id)emptyContext;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 showName:(BOOL)a1;
- (id)initWithNameVariations:(id)a0 preferredNameStyle:(unsigned long long)a1 horizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 verticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageAssetID:(id)a4 personalPoster:(BOOL)a5;

@end
