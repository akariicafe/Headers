@class CNContact, CNGeminiResult, CNGeminiManager, NSString;
@protocol CNUIGeminiDataSourceDelegate;

@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate>

@property (retain, nonatomic) CNGeminiManager *geminiManager;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *channelIdentifier;
@property (weak, nonatomic) id<CNUIGeminiDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillEnterForeground:(id)a0;
- (void)resetDataSource;
- (id)initWithGeminiManager:(id)a0;
- (void)channelsDidChangeForGeminiManager:(id)a0;
- (void).cxx_destruct;

@end
