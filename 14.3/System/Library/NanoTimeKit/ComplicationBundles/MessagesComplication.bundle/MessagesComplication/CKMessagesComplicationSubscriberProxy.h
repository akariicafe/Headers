@class NSString;
@protocol CKMessagesComplicationDataProviderSubscriber;

@interface CKMessagesComplicationSubscriberProxy : NSObject <CKMessagesComplicationDataProviderSubscriber>

@property (weak, nonatomic) id<CKMessagesComplicationDataProviderSubscriber> subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSubscriber:(id)a0;
- (void)unreadCountDidChange:(unsigned long long)a0;

@end
