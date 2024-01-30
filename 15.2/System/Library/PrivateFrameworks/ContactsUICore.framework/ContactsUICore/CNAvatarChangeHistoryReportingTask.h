@class NSArray;
@protocol CNAvatarCacheChangeListenerDelegate;

@interface CNAvatarChangeHistoryReportingTask : CNTask

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) id<CNAvatarCacheChangeListenerDelegate> delegate;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 delegate:(id)a1;

@end
