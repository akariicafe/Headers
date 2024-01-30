@class PSGTVOutManager;

@interface PSGTVOutController : PSListController {
    PSGTVOutManager *_tvOutManager;
}

- (id)specifiers;
- (void)handleTVOutChange;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)writeValue:(struct __CFString { } *)a0 forKey:(struct __CFString { } *)a1;
- (id)isWidescreen:(id)a0;
- (void)setWidescreen:(id)a0 specifier:(id)a1;
- (id)tvSignal:(id)a0;
- (void)setTVSignal:(id)a0 specifier:(id)a1;

@end
