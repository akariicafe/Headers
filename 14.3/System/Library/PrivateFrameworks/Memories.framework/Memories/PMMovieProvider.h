@class VEKProduction, VEKResult, PMMovieProviderAnalyticsEvent;
@protocol PMMovieProviderDelegate;

@interface PMMovieProvider : NSObject

@property (retain, nonatomic) VEKProduction *lastEditingProduction;
@property (nonatomic) unsigned long long currentEditID;
@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMMovieProviderDelegate> providerDelegate;
@property (retain, nonatomic) VEKResult *lastResult;
@property (retain, nonatomic) PMMovieProviderAnalyticsEvent *analyticsEvent;

+ (unsigned long long)movieClipCountWithProduction:(id)a0 result:(id)a1;

- (void).cxx_destruct;
- (id)initWithProduction:(id)a0;
- (void)refreshPlayerItem;
- (void)cancelEdit;

@end
