@class NSString, SBHIconModel;
@protocol SBHLibraryCategoryMapProviderSourceDelegate;

@interface SBHLibraryCategoryMapProviderDefaultSource : NSObject <SBHLibraryCategoryMapProviderSource> {
    SBHIconModel *_iconModel;
    BOOL _refreshScheduled;
}

@property (weak, nonatomic) id<SBHLibraryCategoryMapProviderSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
