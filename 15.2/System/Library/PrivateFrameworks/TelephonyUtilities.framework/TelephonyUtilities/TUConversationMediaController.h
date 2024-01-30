@class NSString;
@protocol TUConversationManagerDataSource, TUConversationMediaControllerDelegate;

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate>

@property (readonly, nonatomic) id<TUConversationManagerDataSource> dataSource;
@property (weak, nonatomic) id<TUConversationMediaControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
