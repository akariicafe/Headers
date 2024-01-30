@class NSString;

@interface NPKMessageCompositionManager : NSObject {
    NSString *_listenerID;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_sendComposition:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (void)sendMessage:(id)a0 withAppExtensionIdentifier:(id)a1 toRecipient:(id)a2 completion:(id /* block */)a3;

@end
