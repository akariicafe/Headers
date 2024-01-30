@class NSString, VEKProduction;
@protocol PMEditProviderDelegate;

@interface PMTitleEditorProvider : NSObject <PMEditProviderProtocol>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subTitle;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateTitle:(id)a0;
- (void)updateSubtitle:(id)a0;
- (id)initWithProduction:(id)a0;
- (id)defaultMemoriesTitleHelper;

@end
