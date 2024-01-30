@class PTSettings, NSString, NSArray, NSPredicate, NSMutableArray;
@protocol PTComponentObserver;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver, PTModuleComponent> {
    NSArray *_rows;
    NSMutableArray *_enabledRows;
    BOOL _enabledSection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ footerTextGetter;
@property (copy, nonatomic) id /* block */ unregisterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PTComponentObserver> componentObserver;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) NSPredicate *appearancePredicate;
@property (retain, nonatomic) NSString *childSettingsKeyPath;
@property (readonly, nonatomic) NSArray *allSections;
@property (readonly, nonatomic) NSArray *enabledSections;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)rowAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)rowDidReload:(id)a0;
- (void)_reloadEnabledRows;
- (void)_recomputeEnabledSection;
- (void)_updateEnabledRows;
- (id)initWithRows:(id)a0;
- (BOOL)_shouldEnableRow:(id)a0;
- (void)_sendInserts:(id)a0 deletes:(id)a1;
- (void)_sendReload;
- (id)_remoteEditingWhitelistedComponent;
- (unsigned long long)indexOfRow:(id)a0;
- (void)reloadSection;

@end
