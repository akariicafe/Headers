@class NSString;

@interface TVRemoteAction : NSObject <TVRemoteItem>

@property (copy, nonatomic) NSString *remoteItemTitle;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithTitle:(id)a0 icon:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_init;
- (BOOL)isRemoteItemCollection;
- (long long)remoteItemIcon;
- (void)handleRemoteAction;

@end
