@class NSString;
@protocol CNContactDataSourceDelegate;

@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate>

@property (weak, nonatomic) id<CNContactDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactDataSourceDidChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
