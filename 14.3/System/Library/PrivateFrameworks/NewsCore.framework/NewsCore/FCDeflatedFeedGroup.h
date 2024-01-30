@class NTPBFeedViewportGroup, NSString, NSArray, FCFeedEdition, NSDate, FCSharedStringIndex, FCColor;
@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;

@interface FCDeflatedFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining>

@property (readonly, nonatomic) NTPBFeedViewportGroup *pbGroup;
@property (readonly, nonatomic) FCSharedStringIndex *sharedStrings;
@property (readonly, nonatomic) long long feedElementType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) long long groupType;
@property (readonly, copy, nonatomic) NSString *eyebrowText;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *ctaText;
@property (readonly, copy, nonatomic) FCColor *titleColor;
@property (readonly, copy, nonatomic) FCColor *darkStyleTitleColor;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> cardStyle;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> darkCardStyle;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) FCFeedEdition *edition;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long mergeID;
@property (readonly, copy, nonatomic) NSArray *headlines;
@property (readonly, copy, nonatomic) NSString *backingTagID;
@property (readonly, copy, nonatomic) NSArray *issueIDs;
@property (readonly, nonatomic) id<FCForYouBridgedFeedGroup> bridgedGroup;
@property (readonly, nonatomic) BOOL usesPlaceholderHeadlines;

@end
