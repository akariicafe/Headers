@class NSString;
@protocol CBContainerProtocol;

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {
    struct __Display { } *_display;
}

@property (retain) id<CBContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDisplay:(struct __Display { } *)a0;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)dealloc;
- (id)init;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;

@end
