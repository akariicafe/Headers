@class NSString, NSArray, NSDictionary, _TtC12NanoUniverse14PreferencePane;

@interface NanoUniverse.PreferencePane : NSObject <NanoUniverse.PreferencePaneDelegate> {
    void /* unknown type, empty encoding */ _name;
    void /* unknown type, empty encoding */ _panes;
    void /* unknown type, empty encoding */ sliders;
    void /* unknown type, empty encoding */ toggles;
    void /* unknown type, empty encoding */ pickersSelections;
    void /* unknown type, empty encoding */ defaultSliders;
    void /* unknown type, empty encoding */ defaultToggles;
    void /* unknown type, empty encoding */ defaultPickersSelections;
    void /* unknown type, empty encoding */ pickerOptions;
    void /* unknown type, empty encoding */ userDefaults;
}

@property (class, nonatomic, readonly) _TtC12NanoUniverse14PreferencePane *aegirRenderingPreferencePane;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *panes;
@property (nonatomic) void /* unknown type, empty encoding */ changeSequence;
@property (nonatomic, copy) NSArray *sliders;
@property (nonatomic, copy) NSArray *toggles;
@property (nonatomic, copy) NSArray *pickersSelections;
@property (nonatomic, copy) NSDictionary *defaultSliders;
@property (nonatomic, copy) NSDictionary *defaultToggles;
@property (nonatomic, copy) NSDictionary *defaultPickersSelections;
@property (nonatomic, copy) NSDictionary *pickerOptions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)getValueForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)fractionValueForOption:(id)a0;
- (id)initWithName:(id)a0 panes:(id)a1;
- (id)initWithName:(id)a0 userDefaults:(id)a1 sliders:(id)a2 toggles:(id)a3 pickerOptions:(id)a4 pickerSelections:(id)a5;
- (void)preferencePaneDidChangeWithPreference:(id)a0;
- (void)set:(id)a0 forKey:(id)a1;

@end
