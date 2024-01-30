@class NSString, NPSDomainAccessor, NPSManager;
@protocol CSLPRFTwoWaySyncSettingDelegate;

@interface CSLPRFTwoWaySyncSetting : NSObject {
    int _notifyToken;
    char *_notificationName;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}

@property (weak, nonatomic) id<CSLPRFTwoWaySyncSettingDelegate> delegate;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id defaultValue;
@property (retain, nonatomic) id value;

- (id)syncManager;
- (id)domainAccessor;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)description;
- (void).cxx_destruct;
- (void)handleDidUnpair;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 notification:(const char *)a2;
- (void)migrate:(id)a0 withMapping:(id /* block */)a1;
- (id)safeValueOfType:(Class)a0;

@end
