@class NSString, UIView;

@interface SBUISystemApertureStackedContentProvider : NSObject <SBUISystemApertureContentViewProviding>

@property (nonatomic) long long contentDistribution;
@property (nonatomic) long long contentAxis;
@property (nonatomic) double contentSpacing;
@property (readonly, nonatomic) UIView *providedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_providedView;
- (id)initWithContentViewProviders:(id)a0;

@end
