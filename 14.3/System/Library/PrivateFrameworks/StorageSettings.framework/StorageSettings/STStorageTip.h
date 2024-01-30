@class NSString, UIImage, PSSpecifier;

@interface STStorageTip : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _specLock;
}

@property (retain) NSString *identifier;
@property (retain) PSSpecifier *specifier;
@property (readonly, nonatomic) PSSpecifier *infoSpecifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *infoText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *representedApp;

- (void)reload;
- (id)init;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)_reload:(id)a0;

@end
