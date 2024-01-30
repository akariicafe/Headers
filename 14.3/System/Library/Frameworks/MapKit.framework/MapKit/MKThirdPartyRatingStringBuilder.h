@class NSString;

@interface MKThirdPartyRatingStringBuilder : NSObject <MKRatingStringProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ratingSymbolName;
+ (id)ratingSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;
+ (id)ratingColorForMapItem:(id)a0;
+ (id)carPlayHeaderStringForMapItem:(id)a0 titleAttributes:(id)a1 providerAttributes:(id)a2;
+ (id)ratingAndReviewSummaryAttributedStringForMapItem:(id)a0 textColor:(id)a1 font:(id)a2 theme:(id)a3;


@end
