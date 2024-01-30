@class NSArray, NSString, NSData, UIActivity, UISUISecurityContext;

@interface SHSheetActivityItemsResult : NSObject

@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, copy, nonatomic) NSArray *activityItemValues;
@property (copy, nonatomic) NSArray *activityItemURLValues;
@property (retain, nonatomic) UISUISecurityContext *securityScopedURLs;
@property (copy, nonatomic) NSString *initialSocialText;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSData *suggestedImageData;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0 activityItemValues:(id)a1;

@end
