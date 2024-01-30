@class NSString;
@protocol SXResourceDataSource;

@interface SXResourceDataSourceContainer : NSObject <SXResourceDataSourceContainer>

@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerResourceDataSource:(id)a0;

@end
